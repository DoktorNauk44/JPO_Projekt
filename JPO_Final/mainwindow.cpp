#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Obsługa przycisków na GUI oraz początkowe wartości tabelki zaawierającej rekordy
    connect(ui->addRecord, &QPushButton::clicked, this, &MainWindow::addRecord);
    connect(ui->removeRecord, &QPushButton::clicked, this, &MainWindow::removeRecord);
    connect(ui->findRecord_b, &QPushButton::clicked, this, &MainWindow::findRecord);
    connect(ui->saveButton, &QPushButton::clicked, this, &MainWindow::saveFile);
    connect(ui->loadButton, &QPushButton::clicked, this, &MainWindow::loadFile);
    ui->tableWidget->setColumnCount(6);
    QStringList headers = {"ID", "Name", "Surname", "TermId", "TermNr", "TermYear"};
    ui->tableWidget->setHorizontalHeaderLabels(headers);
}

MainWindow::~MainWindow() {
    delete ui;
}

//Odśwież tabelę
void MainWindow::refreshTable() {

    ui->tableWidget->setRowCount(database.GetStudents().size());
    for (size_t i = 0; i < database.GetStudents().size(); ++i) {
        auto x = database.GetStudents()[i];
        const Student& student = x;
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(QString::number(student.GetStudentId())));
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(QString::fromStdString(student.GetStudentName())));
        ui->tableWidget->setItem(i, 2, new QTableWidgetItem(QString::fromStdString(student.GetStudentSurname())));
        ui->tableWidget->setItem(i, 3, new QTableWidgetItem(QString::number(student.GetStudentTerm().GetTermId())));
        ui->tableWidget->setItem(i, 4, new QTableWidgetItem(QString::number(student.GetStudentTerm().GetTermNr())));
        ui->tableWidget->setItem(i, 5, new QTableWidgetItem(QString::number(student.GetStudentTerm().GetTermYear())));
    }
}

//Dodaj do tabeli
void MainWindow::addRecord() {
    int id = ui->idLineEdit->text().toInt();
    QString name = ui->nameLineEdit->text();
    QString surname = ui->surnameLineEdit->text();
    int termid = ui->termIdLineEdit->text().toInt();
    int termnr = ui->termNrLineEdit->text().toInt();
    int termyear = ui->termYearLineEdit->text().toInt();

    database.add_record(Student(id, name.toStdString(), surname.toStdString(), Term(termid, termnr, termyear)));
    refreshTable();

    ui->idLineEdit->clear();
    ui->nameLineEdit->clear();
    ui->surnameLineEdit->clear();
    ui->termIdLineEdit->clear();
    ui->termNrLineEdit->clear();
    ui->termYearLineEdit->clear();
}

//Usuń z tabeli
void MainWindow::removeRecord() {
    int id = ui->removeIdRecord->text().toInt();
    database.remove_record(id);
    refreshTable();
    ui->removeIdRecord->clear();
}

//Znajdź w tabeli
void MainWindow::findRecord() {
    int id = ui->findRecord->text().toInt();
    auto result = database.find_record(id);
    if (result != nullptr) {
        QMessageBox::information(
            this,
            "Rekord znaleziony",
            QString("ID: %1\nImię: %2\nNazwisko: %3\nSemestr: %4, Rok: %5")
                .arg(result->GetStudentId())
                .arg(QString::fromStdString(result->GetStudentName()))
                .arg(QString::fromStdString(result->GetStudentSurname()))
                .arg(result->GetStudentTerm().GetTermId())
                .arg(result->GetStudentTerm().GetTermNr())
            );
    } else {
        QMessageBox::warning(this, "Nie znaleziono", "Rekord o podanym ID nie istnieje.");
    }
}

//Zapisz obecny stan bazy danych
void MainWindow::saveFile() {
    database.save_file("Testowy.txt");
}

//I wczytaj go 
void MainWindow::loadFile() {
    database.load_file("Testowy.txt");
    refreshTable();
}

