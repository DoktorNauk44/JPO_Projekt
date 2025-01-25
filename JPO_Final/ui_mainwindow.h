/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_6;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *idLineEdit;
    QLabel *label_2;
    QLineEdit *nameLineEdit;
    QLabel *label_3;
    QLineEdit *surnameLineEdit;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QLineEdit *termIdLineEdit;
    QLabel *label_5;
    QLineEdit *termNrLineEdit;
    QLabel *label_6;
    QLineEdit *termYearLineEdit;
    QPushButton *addRecord;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_7;
    QLineEdit *removeIdRecord;
    QLabel *label_8;
    QLineEdit *findRecord;
    QVBoxLayout *verticalLayout_5;
    QPushButton *removeRecord;
    QPushButton *findRecord_b;
    QPushButton *saveButton;
    QPushButton *loadButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1201, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_7 = new QVBoxLayout(centralwidget);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName("tableWidget");

        verticalLayout_6->addWidget(tableWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        idLineEdit = new QLineEdit(centralwidget);
        idLineEdit->setObjectName("idLineEdit");

        verticalLayout->addWidget(idLineEdit);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        nameLineEdit = new QLineEdit(centralwidget);
        nameLineEdit->setObjectName("nameLineEdit");

        verticalLayout->addWidget(nameLineEdit);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        surnameLineEdit = new QLineEdit(centralwidget);
        surnameLineEdit->setObjectName("surnameLineEdit");

        verticalLayout->addWidget(surnameLineEdit);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");

        verticalLayout_2->addWidget(label_4);

        termIdLineEdit = new QLineEdit(centralwidget);
        termIdLineEdit->setObjectName("termIdLineEdit");

        verticalLayout_2->addWidget(termIdLineEdit);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");

        verticalLayout_2->addWidget(label_5);

        termNrLineEdit = new QLineEdit(centralwidget);
        termNrLineEdit->setObjectName("termNrLineEdit");

        verticalLayout_2->addWidget(termNrLineEdit);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");

        verticalLayout_2->addWidget(label_6);

        termYearLineEdit = new QLineEdit(centralwidget);
        termYearLineEdit->setObjectName("termYearLineEdit");

        verticalLayout_2->addWidget(termYearLineEdit);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        addRecord = new QPushButton(centralwidget);
        addRecord->setObjectName("addRecord");

        verticalLayout_3->addWidget(addRecord);


        horizontalLayout_3->addLayout(verticalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");

        verticalLayout_4->addWidget(label_7);

        removeIdRecord = new QLineEdit(centralwidget);
        removeIdRecord->setObjectName("removeIdRecord");

        verticalLayout_4->addWidget(removeIdRecord);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");

        verticalLayout_4->addWidget(label_8);

        findRecord = new QLineEdit(centralwidget);
        findRecord->setObjectName("findRecord");

        verticalLayout_4->addWidget(findRecord);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        removeRecord = new QPushButton(centralwidget);
        removeRecord->setObjectName("removeRecord");

        verticalLayout_5->addWidget(removeRecord);

        findRecord_b = new QPushButton(centralwidget);
        findRecord_b->setObjectName("findRecord_b");

        verticalLayout_5->addWidget(findRecord_b);


        horizontalLayout_2->addLayout(verticalLayout_5);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_6->addLayout(horizontalLayout_3);


        verticalLayout_7->addLayout(verticalLayout_6);

        saveButton = new QPushButton(centralwidget);
        saveButton->setObjectName("saveButton");

        verticalLayout_7->addWidget(saveButton);

        loadButton = new QPushButton(centralwidget);
        loadButton->setObjectName("loadButton");

        verticalLayout_7->addWidget(loadButton);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1201, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Student ID", nullptr));
        idLineEdit->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Surname", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Term ID", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Term Nr", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Year", nullptr));
        addRecord->setText(QCoreApplication::translate("MainWindow", "Add Record", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Student ID", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Student ID", nullptr));
        removeRecord->setText(QCoreApplication::translate("MainWindow", "Delete Record (ID)", nullptr));
        findRecord_b->setText(QCoreApplication::translate("MainWindow", "Find Record (ID)", nullptr));
        saveButton->setText(QCoreApplication::translate("MainWindow", "Save File", nullptr));
        loadButton->setText(QCoreApplication::translate("MainWindow", "Load File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
