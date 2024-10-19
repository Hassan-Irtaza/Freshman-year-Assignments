#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char ch;
    // 1. Open the file for writing
    ofstream myFile("example.txt", ios ::app); // Replace "example.txt" with desired filename
    string name;
    int id;
    // 2. Check if file opened successfully
    if (myFile.is_open())
    {

        do
        {
            cout << "name and id" << endl;

            cin >> name;
            cin >> id;

            // 3. Write text to the file
            myFile << "name: " << name << endl;
            myFile << "sap id: " << id << endl;

            cout << "Text written to the file." << endl;
            cout << "enter 0 to quit: ";
            cin >> ch;

        } while (ch != '0');
    }
    else
    {
        cerr << "Error opening file!" << endl;
    }

    // 4. Close the file (important!)
    myFile.close();

    /*
    file open:

    ofstream myfile("example.txt")
    if(myfile.is_open){

    }

    file write:

    myfile << "Name: "<< name <<endl;
    myfile << "Sap id: "<< id <<endl;

    file.close();
    */
    string line;
    ifstream myfile("example.txt");

    if (myfile.is_open())
    {
        while (getline(myfile, line))
        {
            cout << line << endl;
        }
    }

    return 0;
}
