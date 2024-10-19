#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

struct Student
{
    int id;
    string name;
    int marks[3];
};

double calcAverage(int marks[], int numMarks)
{
    double sum = 0.0;
    for (int i = 0; i < numMarks; i++)
    {
        sum += marks[i];
    }
    return sum / numMarks;
}

string Grade(double average)
{
    if (average >= 90)
    {
        return "A";
    }
    else if (average >= 80)
    {
        return "B";
    }
    else if (average >= 70)
    {
        return "C";
    }
    else if (average >= 60)
    {
        return "D";
    }
    else
    {
        return "F";
    }
}

int main()
{
    char ch;
    ifstream inputFile("student.txt");
    ofstream outputFile("results.txt");

    if (!inputFile.is_open())
    {
        cerr << "Error opening input file!" << endl;
        return 0;
    }

    if (!outputFile.is_open())
    {
        cerr << "Error opening output file!" << endl;
        return 0;
    }

    string firstLine;
    getline(inputFile, firstLine);

    outputFile << "ID Name Average Grade" << endl;

    string line;
    while (getline(inputFile, line))
    {
        stringstream ss(line);
        Student student;
        ss >> student.id;
        ss >> student.name;
        for (int i = 0; i < 3; i++)
        {
            ss >> student.marks[i];
        }
        double average = calcAverage(student.marks, 3);
        string grade = Grade(average);
        outputFile << student.id << " " << student.name << " " << average << " " << grade << endl;
    }

    inputFile.close();
    outputFile.close();

    cout << "Student data processed successfully!" << endl;
    cout << "Do you want to view file in console(Y/N): ";
    cin >> ch;

    if (ch == 'y')
    {
        ifstream output2("results.txt");
        while (!output2.eof())
        {
            getline(output2, line, ' ');
            cout << line << "\t";
        }
        output2.close();
    }

    return 0;
}
