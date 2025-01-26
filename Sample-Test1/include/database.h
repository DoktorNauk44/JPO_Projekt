#include <vector>
#include <string>
#include <fstream>
#include <algorithm>

using std::fstream;
using std::ostream;
using std::istream;
using std::string;
using std::vector;

class Term {
private:
    int termId;
    int termNr;
    int termYear;
public:
    Term(int ftermId = 1, int ftermNr = 2, int ftermYear = 0)
        : termId(ftermId), termNr(ftermNr), termYear(ftermYear) {}

    int GetTermId(void) const;
    int GetTermNr(void) const;
    int GetTermYear(void) const;
    void SetTermId(const int);
    void SetTermNr(const int);
    void SetTermYear(const int);

    friend ostream& operator<<(ostream& o, const Term& t);
    friend istream& operator>>(istream& i, Term& t);
};

class Student {
private:
    int studentId;
    string studentName;
    string studentSurname;
    Term studentTerm;

public:
    Student(int fstudentId = 0, string fstudentName = "John", string fstudentSurname = "Doe", Term fstudentTerm = {})
        : studentId(fstudentId), studentName(fstudentName), studentSurname(fstudentSurname), studentTerm(fstudentTerm) {}

    int GetStudentId(void) const;
    string GetStudentName(void) const;
    string GetStudentSurname(void) const;
    Term GetStudentTerm(void) const;

    void SetStudentId(int);
    void SetStudentName(const string);
    void SetStudentSurname(const string);
    void SetStudentTerm(const Term);


    friend ostream& operator<<(ostream& o, const Student& s);
    friend istream& operator>>(istream& i, Student& s);
};

class DataBase {
private:
    using DB = vector<Student>;
    DB students;
public:
    DB GetStudents(void) const;
    void SetStudents(const vector<Student>);
    

    void add_record(const Student& student);
    void remove_record(int id);
    Student* find_record(int id);
    void save_file(const string& filename);
    void load_file(const string& filename);
};
