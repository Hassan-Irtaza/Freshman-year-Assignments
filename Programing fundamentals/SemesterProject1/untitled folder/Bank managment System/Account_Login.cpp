#include <iostream>
using namespace std;

class Account_Info
{
private:
    string password;

public:
    string username;
    void getpassword(string username);
};

void Account_Info ::getpassword(string username)
{
}

typedef struct student
{
    string name;
    int sapID;
    string password;
} st;

const int max_students = 3;
st student[max_students];

int main()
{
    for (int i = 0; i < max_students; i++)
    {
        cout << "Enter your name: ";
        cin >> student[i].name;
        cout << "Enter your SapID: ";
        cin >> student[i].sapID;
        cout << "Enter your Password: ";
        cin >> student[i].password;
    }
    for (int i = 0; i < max_students; i++)
    {

        cout << student[i].name << endl;

        cout << student[i].sapID << endl;

        cout << student[i].password << endl;
    }

    return 0;
}