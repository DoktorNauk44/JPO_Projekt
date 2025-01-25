#include "../include/database.h"

/////////////////////////////////////////////////////////Przeci¹¿enia operatorów
ostream& operator<<(ostream& o, const Term& t) {
    o << t.termId << " " << t.termNr << " " << t.termYear;
    return o;
}

istream& operator>>(istream& i, Term& t) {
    i >> t.termId >> t.termNr >> t.termYear;
    return i;
}

ostream& operator<<(ostream& o, const Student& s) {
    o << s.studentId << " " << s.studentName << " " << s.studentSurname << " " << s.studentTerm;
    return o;
}

istream& operator>>(istream& i, Student& s) {
    i >> s.studentId >> s.studentName >> s.studentSurname >> s.studentTerm;
    return i;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
 

///////////////////////////////////////////////////////Gettery i settery
int Term::GetTermId(void) const { return termId; }
int Term::GetTermNr(void) const { return termNr; }
int Term::GetTermYear(void) const { return termYear; }

void Term::SetTermId(const int i) { termId = i; }
void Term::SetTermNr(const int i) { termNr = i; }
void Term::SetTermYear(const int i) { termYear = i; }


int Student::GetStudentId(void) const { return studentId; }
string Student::GetStudentName(void) const { return studentName; }
string Student::GetStudentSurname(void) const { return studentSurname; }
Term Student::GetStudentTerm(void) const { return studentTerm; }

void Student::SetStudentId(const int i) { studentId = i; }
void Student::SetStudentName(const string s) { studentName = s; }
void Student::SetStudentSurname(const string s) { studentSurname = s; }
void Student::SetStudentTerm(const Term t) { studentTerm = t; }

vector<Student> DataBase::GetStudents(void) const { return students; }
void DataBase::SetStudents(const vector<Student> s) { students = s; }
/////////////////////////////////////////////////////////////////////////////////


//Dodaj rekord
void DataBase::add_record(const Student& student) {
    students.push_back(student);
}

//Usuñ rekord
void DataBase::remove_record(int id) {
    students.erase(std::remove_if(students.begin(), students.end(), [id](const Student& s) { return s.GetStudentId() == id; }), students.end());
}


//ZnajdŸ rekord
Student* DataBase::find_record(int id) {
    for (auto& student : students) {
        if (student.GetStudentId() == id) {
            return &student;
        }
    }
    return nullptr;
}

//Zapisz
void DataBase::save_file(const string& filename) {
    std::ofstream file(filename);
    if (file) {
        for (auto& student : students) {
            file << student << "\n";
        }
    }
}

//Odczytaj
void DataBase::load_file(const string& filename) {
    std::ifstream file(filename);
    if (file) {
        Student student;
        while (file >> student) {
            students.push_back(student);
        }
    }
}
