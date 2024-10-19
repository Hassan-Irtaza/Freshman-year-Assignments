#include <iostream>
#include <cstdlib> // For rand()

using namespace std;

// int woodenchest[] = {1, 2, 3, 0, 0, 0, 0, 0, 0};
// int silverchest[] = {1, 2, 3, 0, 0, 0};
// int goldenchest[] = {1, 2, 3};

int getChestLoot(int choice)
{

    if (choice == 1)
    {
        int ch = rand() % 7;
        if (ch == 0)
        {
            cout << "You get a basic potion from the wooden chest!" << endl;
            return 0;
        }
        else if (ch == 1)
        {
            cout << "you get a rage potion from the chest" << endl;
            return 1;
        }
        else if (ch == 2)
        {
            cout << "you get a sword from the chest" << endl;
            return 2;
        }
        else
        {
            cout << "You find nothing in the wooden chest." << endl;
            return 3;
        }
    }
    else if (choice == 2)
    {
        int ch = rand() % 4;
        if (ch == 0)
        {
            cout << "You get a basic potion from the wooden chest!" << endl;
            return 0;
        }
        else if (ch == 1)
        {
            cout << "you get a rage potion from the chest" << endl;
            return 1;
        }
        else if (ch == 2)
        {
            cout << "you get a sword from the chest" << endl;
            return 2;
        }
        else
        {
            cout << "You find nothing in the wooden chest." << endl;
            return 3;
        }
    }
    else if (choice == 3)
    {
        int ch = rand() % 2;
        if (ch == 0)
        {
            cout << "You get a basic potion from the wooden chest!" << endl;
            return 0;
        }
        else if (ch == 1)
        {
            cout << "you get a rage potion from the chest" << endl;
            return 1;
        }
        else if (ch == 2)
        {
            cout << "you get a sword from the chest" << endl;
            return 2;
        }
    }
}

int main()
{
    int choice;
    while (choice != 0)
    {

        cout << "Choose a chest (1 - wooden, 2 - silver, 3 - golden): ";
        cin >> choice;

        getChestLoot(choice);
        cout << "\n\n\n";
    }
    return 0;
}
