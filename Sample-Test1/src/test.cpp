#include "gtest/gtest.h"
#include "../include/database.h"

//Test dla funkcji dodawania rekordu
TEST(DataBaseTest, AddRecord) {
    DataBase db;
    Student student;
    Term term;

    term.SetTermId(1);
    term.SetTermNr(1);
    term.SetTermYear(2025);

    student.SetStudentId(1);
    student.SetStudentName("John");
    student.SetStudentSurname("Doe");
    student.SetStudentTerm(term);

    db.add_record(student);

    EXPECT_EQ(db.GetStudents().size(), 1);
    EXPECT_EQ(db.GetStudents()[0].GetStudentId(), 1);
    EXPECT_EQ(db.GetStudents()[0].GetStudentName(), "John");
    EXPECT_EQ(db.GetStudents()[0].GetStudentSurname(), "Doe");
    EXPECT_EQ(db.GetStudents()[0].GetStudentTerm().GetTermId(), 1);
    EXPECT_EQ(db.GetStudents()[0].GetStudentTerm().GetTermNr(), 1);
    EXPECT_EQ(db.GetStudents()[0].GetStudentTerm().GetTermYear(), 2025);
}

//Test dla funkcji usuwania rekordu
TEST(DataBaseTest, RemoveRecord) {
    DataBase db;
    Student student;
    Term term;

    term.SetTermId(1);
    term.SetTermNr(1);
    term.SetTermYear(2025);

    student.SetStudentId(1);
    student.SetStudentName("Jan");
    student.SetStudentSurname("Kowalski");
    student.SetStudentTerm(term);

    db.add_record(student);
    db.remove_record(1);

    EXPECT_EQ(db.GetStudents().size(), 0);
}

//Test dla funkcji znajdowania rekordu
TEST(DataBaseTest, FindRecord) {
    DataBase db;
    Student student;
    Term term;

    term.SetTermId(1);
    term.SetTermNr(1);
    term.SetTermYear(2025);

    student.SetStudentId(1);
    student.SetStudentName("John");
    student.SetStudentSurname("Doe");
    student.SetStudentTerm(term);

    db.add_record(student);
    Student* foundStudent = db.find_record(1);

    ASSERT_NE(foundStudent, nullptr);
    EXPECT_EQ(foundStudent->GetStudentId(), 1);
    EXPECT_EQ(foundStudent->GetStudentName(), "John");
    EXPECT_EQ(foundStudent->GetStudentSurname(), "Doe");
    EXPECT_EQ(foundStudent->GetStudentTerm().GetTermId(), 1);
    EXPECT_EQ(foundStudent->GetStudentTerm().GetTermNr(), 1);
    EXPECT_EQ(foundStudent->GetStudentTerm().GetTermYear(), 2025);
}

//Test dla funkcji zapisywania i ³adowania pliku
TEST(DataBaseTest, SaveAndLoadFile) {
    DataBase db;
    Student student;
    Term term;

    term.SetTermId(1);
    term.SetTermNr(1);
    term.SetTermYear(2025);

    student.SetStudentId(1);
    student.SetStudentName("John");
    student.SetStudentSurname("Doe");
    student.SetStudentTerm(term);

    db.add_record(student);
    db.save_file("test_data.txt");

    DataBase newDb;
    newDb.load_file("test_data.txt");

    EXPECT_EQ(newDb.GetStudents().size(), 1);
    EXPECT_EQ(newDb.GetStudents()[0].GetStudentId(), 1);
    EXPECT_EQ(newDb.GetStudents()[0].GetStudentName(), "John");
    EXPECT_EQ(newDb.GetStudents()[0].GetStudentSurname(), "Doe");
    EXPECT_EQ(newDb.GetStudents()[0].GetStudentTerm().GetTermId(), 1);
    EXPECT_EQ(newDb.GetStudents()[0].GetStudentTerm().GetTermNr(), 1);
    EXPECT_EQ(newDb.GetStudents()[0].GetStudentTerm().GetTermYear(), 2025);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();  //Wszystkie testy
}
