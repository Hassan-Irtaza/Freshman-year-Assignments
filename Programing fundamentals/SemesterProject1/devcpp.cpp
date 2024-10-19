#include <iostream>
#include <string>
#include <cctype>
#include <fstream>
#include <iomanip>

using namespace std;

// Struct definition for a student
struct Student {
    string name;
    int SapID;
    double Gpa;
    int age;
    int Semester;
};

// Set array size to 100 
const int MAX_STUDENTS = 50;
Student students[MAX_STUDENTS];
// Starting Value
int numStudents = 0;

// Function declarations or Prototyping just a preference it is not a must
void displayMenu();
void addStudent();
void removeStudent();
void updateStudent();
void displayAllStudents();
void loadStudentsFromFile();
void saveStudentsToFile();
void continuePrompt(int &choice);

int main() {
    int choice;
// load the file
    loadStudentsFromFile();
// Do while loop for selection mechanism it iterates at least once
// while choice is not 5 continue loop
    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
            case 1:
                addStudent();
                break;
            case 2:
                removeStudent();
                break;
            case 3:
                updateStudent();
                break;
            case 4:
                displayAllStudents();
                break;
            case 5:
                cout << "Exiting the program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 0);

// Save to file
    saveStudentsToFile();

    return 0;
}
// Reusible switch
void continuePrompt(int &choice) {
    cout << "Do you want to continue? (1 for yes, 0 for no): ";
    cin >> choice;
}

// displays all "Choice"s
void displayMenu() {
    cout << "\nStudent Management System Menu:\n";
    cout << "1. Add Student\n";
    cout << "2. Remove Student\n";
    cout << "3. Update Student Information\n";
    cout << "4. Display All Students\n";
    cout << "5. Exit\n";
}

void addStudent() {
// first check for space in array1
// then add the value of [numstudents] as the ref index of the array
// the pre determined value of numstudents is 0 [in line 19]
// then it gets incremented each time
    if (numStudents < MAX_STUDENTS) {
        cout << "Enter student name: "<< endl;
        getline(cin,students[numStudents].name);
        cin.ignore();
        cout << "Enter student Sap ID: " << endl;
        cin >> students[numStudents].SapID;
        cin.ignore();
        cout << "Enter student Gpa: ";
        cin >> students[numStudents].Gpa;
        cin.ignore();
        cout << "Enter student age: ";
        cin >> students[numStudents].age;
        cin.ignore();
        cout << "Enter student Semester: ";
        cin >> students[numStudents].Semester;
        // increment numstudents to move the index value upward
        numStudents++;
        cout << "Student added successfully!\n";
    } else {
        // if space is not available show ERROR msg
        cout << "Cannot add more students. Maximum limit reached.\n";
    }
}

void removeStudent() {
    int studentID;
    if (numStudents < 1)
    {
       cout<<"There are No students in the directory\n";
    }
    else{
    cout << "Enter student Sap ID to remove: ";
    cin >> studentID;

    int foundIndex = -1;
    for (int i = 0; i < numStudents; ++i) {
        if (students[i].SapID == studentID) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        // Shift elements to remove the student
        for (int i = foundIndex; i < numStudents - 1; ++i) {
            students[i] = students[i + 1];
        }

        numStudents--;
        cout << "Student removed successfully!\n";
    } else {
        cout << "Student not found.\n";
    }
    }
}

void updateStudent() {
    int studentID;
    if (numStudents < 1)
    {
       cout<<"There are No students in the directory\n";
    }
    else{
    cout << "Enter student Sap ID to update: ";
    cin >> studentID;

    int foundIndex = -1;
    for (int i = 0; i < numStudents; ++i) {
        if (students[i].SapID == studentID) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        // Update student information
        cout << "Enter new student name: ";
        cin >> students[foundIndex].name;
        cout << "Enter new student Gpa: ";
        cin >> students[foundIndex].Gpa;
        cout << "Enter new student Age: ";
        cin >> students[foundIndex].age;
        cout << "Enter new student Semester: ";
        cin >> students[foundIndex].Semester;

        cout << "Student information updated successfully!\n";
    } else {
        cout << "Student not found.\n";
    }
    }
}

void displayAllStudents() {
   if (numStudents > 0) {
        cout << "\nList of Students:\n";
        cout << "-------------------------------------------------------------\n";
        cout << "  #   |   Name           |   ID    |   GPA   |  Age  | Semester\n";
        cout << "-------------------------------------------------------------\n";

        for (int i = 0; i < numStudents; ++i) {
            cout << setw(5) << i + 1 << " | "
                 << setw(15) << students[i].name << " | "
                 << setw(8) << students[i].SapID << " | "
                 << setw(7) << students[i].Gpa << " | "
                 << setw(5) << students[i].age << " | "
                 << setw(8) << students[i].Semester << "\n";
        }

        cout << "-------------------------------------------------------------\n";
    } else {
        cout << "No students to display.\n";
    }
}

// Define the filename
const string FILENAME = "students.txt";  

void loadStudentsFromFile() {
    // Open the file for reading
    ifstream inputFile(FILENAME); 
    if (inputFile.is_open()) {
        while (inputFile >> students[numStudents].name >> students[numStudents].SapID >>
               students[numStudents].Gpa >> students[numStudents].age >>
               students[numStudents].Semester) {
            numStudents++;
        }
        inputFile.close();
        cout << "Students loaded from file.\n";
    } else {
        cout << "Unable to open file: " << FILENAME << endl;
    }
}

void saveStudentsToFile() {
    // Open the file for writing
    ofstream outputFile(FILENAME);  
    if (outputFile.is_open()) {
        for (int i = 0; i < numStudents; ++i) {
            outputFile << students[i].name << " " << students[i].SapID << " "
                        << students[i].Gpa << " " << students[i].age << " "
                        << students[i].Semester << "\n";
        }
        outputFile.close();
        cout << "Students saved to file.\n";
    } else {
        cout << "Unable to open file: " << FILENAME << endl;
    }
}