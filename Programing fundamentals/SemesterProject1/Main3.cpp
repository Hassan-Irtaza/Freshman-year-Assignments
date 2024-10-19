#include <iostream>
using namespace std;
struct Student
{
    string name;
    string degree;
    double gpa;
    int age;
    int SapID;
    int semester;
};
Student AddStudent(
    string name,
    string degree,
    double gpa,
    int age,
    int SapID,
    int semester) {
        Student newStudent;  
        newStudent.name = name;
        newStudent.degree = degree;
        newStudent.gpa = gpa;
        newStudent.age = age;
        newStudent.SapID = SapID;
        newStudent.semester = semester;

        return newStudent;  
}

Student RemoveStudent(Student &Student){
    Student.name = "";
    Student.degree = "";
    Student.gpa = 0.0;
    Student.age = 0;
    Student.SapID = 0;
    Student.semester = 0;
};
void UpdateStudent(){

};
void DisplayStudents(){

};

int main() {
    Student first;
    first.name = "hassan";
    first.age = 20; 
    first.degree = "Cs";
    first.gpa = 3.8;
    first.SapID = 70145652;
    first.semester = 1;
    cout<<first.name<<endl;
    cout<<first.age<<endl;
    cout<<first.degree<<endl;
    cout<<first.gpa<<endl;
    cout<<first.SapID<<endl;
    cout<<first.semester<<endl;

    return 0;
}