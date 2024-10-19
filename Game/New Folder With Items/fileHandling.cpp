#include <iostream>
#include <fstream>
using namespace std;
using namespace std;

struct Character
{
    int health = 100;
    int attack = 20;
    int shield = 5;

    void increaseHealth(int amount)
    {
        health += amount;
        cout << "Health increased by " << amount << ". Current health: " << health << endl;
    }
};
int main()
{
    int key = 'a';
    Character player;

    int health = player.health;
    int attack = player.attack;
    int defense = player.shield;

    ofstream gameData("save.txt");

    if (gameData)
    {
        gameData << health << endl;
        gameData << key;
    }
    gameData.close();
    ifstream load("save.txt");

    if (!gameData.eof())
    {
        load >> health;
        load >> key;
    }
    load.close();

    return 0;
}