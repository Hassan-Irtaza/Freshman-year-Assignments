// #include <iostream>
// #include <fstream>
// #include <string>

// using namespace std;

// struct Student
// {
//     int id;
//     string name;
//     int marks[3];
//     double average;
//     char grade;
// };

// double calcAverage(Student data[], int numMarks, int id)
// {
//     double sum = 0.0;
//     for (int i = 0; i < numMarks; i++)
//     {
//         sum += data[id].marks[i];
//     }
//     return sum / numMarks;
// }

// char Grade(double average)
// {
//     if (average >= 90)
//     {
//         return 'A';
//     }
//     else if (average >= 80)
//     {
//         return 'B';
//     }
//     else if (average >= 70)
//     {
//         return 'C';
//     }
//     else if (average >= 60)
//     {
//         return 'D';
//     }
//     else
//     {
//         return 'F';
//     }
// }

// int main()
// {
//     char ch;
//     Student data[100];
//     string firstLine;
//     int count = 0;
//     ifstream inputFile("student.txt");
//     if (!inputFile.is_open())
//     {
//         cerr << "Error opening input file!" << endl;
//         return 0;
//     }

//     while (getline(inputFile, firstLine))
//     {
//         count++;
//     }
//     if (count > 100)
//     {
//         cout << "File data exceeds the computable limit of the program!";
//         return 0;
//     }
//     inputFile.clear();
//     inputFile.seekg(0);
//     getline(inputFile, firstLine);
//     for (int i = 0; i < count; i++)
//     {
//         inputFile >> data[i].id;
//         inputFile >> data[i].name;
//         for (int j = 0; j < 3; j++)
//         {
//             inputFile >> data[i].marks[j];
//         }
//         data[i].average = calcAverage(data, 3, i);
//         data[i].grade = Grade(data[i].average);
//     }
//     ofstream outputFile("results.txt");
//     if (!outputFile.is_open())
//     {
//         cerr << "Error opening output file!" << endl;
//         return 0;
//     }
//     outputFile << "ID\tName\tAverage\tGrade" << endl;
//     outputFile << fixed << setprecision(2);

//     for (int i = 0; i < 3; i++)
//     {
//         outputFile << data[i].id << "\t" << data[i].name << "\t" << data[i].average << "\t" << data[i].grade << endl;
//     }

//     cout << "Student data processed successfully!" << endl;
//     cout << "Do you want to view file in console(Y/N): ";
//     cin >> ch;
//     string line;
//     if (ch == 'y')
//     {
//         ifstream output2("results.txt");
//         while (!output2.eof())
//         {
//             getline(output2, line, ' ');
//             cout << line << "\t";
//         }
//         output2.close();
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    string name;
    cout << "enter your name: ";
    getline(cin, name);
    cout << name << endl;
    return 0;
}