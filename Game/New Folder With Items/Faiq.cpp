#include <iostream>
#include <fstream>
using namespace std;

struct student
{
    int id;
    string name;
    int subject_1;
    int subject_2;
    int subject_3;
    double average;
    char grade;
};
void averageCalculator(student info[], int s)
{
    for (int i = 0; i < s; i++)
    {
        info[i].average = (info[i].subject_1 + info[i].subject_2 + info[i].subject_3) / 3.0;
    }
}
void gradeCalculator(student info[], int s)
{
    for (int i = 0; i < s; i++)
    {
        if (info[i].average >= 90 && info[i].average <= 100)
        {
            info[i].grade = 'A';
        }
        else if (info[i].average >= 80 && info[i].average < 90)
        {
            info[i].grade = 'B';
        }
        else if (info[i].average >= 70 && info[i].average < 80)
        {
            info[i].grade = 'C';
        }
        else if (info[i].average >= 60 && info[i].average < 70)
        {
            info[i].grade = 'D';
        }
        else if (info[i].average < 60)
        {
            info[i].grade = 'F';
        }
    }
}

int main()
{
    string header_line;
    const int size = 3;
    student info[size];
    ifstream in;
    in.open("student.txt");
    if (!in)
    {
        cerr << "Unable to open file" << endl;
        return 0;
    }
    getline(in, header_line);
    for (int i = 0; i < size; i++)
    {
        in >> info[i].id;
        in >> info[i].name;
        in >> info[i].subject_1;
        in >> info[i].subject_2;
        in >> info[i].subject_3;
    }
    averageCalculator(info, size);
    gradeCalculator(info, size);
    in.close();
    ofstream out;
    out.open("result.txt");
    if (!out)
    {
        cerr << "Unable to open file" << endl;
    }
    string header_line_output = "ID Name Average Grade";
    out << header_line_output << endl;
    for (int i = 0; i < size; i++)
    {
        out << info[i].id << " " << info[i].name << " " << info[i].average << " " << info[i].grade << endl;
    }
    out.close();
    return 0;
}