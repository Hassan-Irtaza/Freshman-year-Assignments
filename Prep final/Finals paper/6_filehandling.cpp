#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream rTF("TeacherFeedback.txt");
    ifstream rSF("StudentsFeedback.txt");
    string Teacher, Student, T, S;
    while (getline(rTF, T))
    {
        Teacher += T;
    }
    while (getline(rSF, S))
    {
        Student += S;
    }
    rTF.close();
    rSF.close();
    ofstream wTF("TeacherFeedback.txt");
    ofstream wSF("StudentsFeedback.txt");
    wTF << Student;
    wSF << Teacher;
    wTF.close();
    wSF.close();
    return 0;
}