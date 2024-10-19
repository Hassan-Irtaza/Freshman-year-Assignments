#include <iostream>
#include <cstdlib>
using namespace std;

struct character
{
    int characterHealth = 100;
    int characterAttack = 20;
    int charactershield = 5;

    void increaseHealth(int amount)
    {
        characterHealth += amount;
        cout << "Health increased by " << amount << ". Current health: " << characterHealth << endl;
    }
};

struct goblin
{
    int Health = 40;
    int Attack = 10;
    int Defence = 0;
};

struct knight
{
    int Health = 100;
    int Attack = 50;
    int Defence = 15;
};

struct dragon
{
    int Health = 300;
    int Attack = 100;
    int defence = 30;
};

struct Item
{
    int type;
};

struct Inventory
{
    const int maxHealthPotions = 5;
    const int maxSwords = 1;
    int healthPotions = 0;
    int swords = 0;
    Item items[10];

    int GetItemType(int itemCode)
    {

        return itemCode;
    }

    bool AddItem(int itemCode)
    {
        int type = GetItemType(itemCode);
        if (type == 0)
        {
            if (healthPotions < maxHealthPotions)
            {
                items[healthPotions + swords].type = type;
                healthPotions++;
                return true;
            }
            else
            {
                cout << "Inventory full for Health Potions!" << endl;
                return false;
            }
        }
        else if (type == 2)
        {
            if (swords < maxSwords)
            {
                items[healthPotions + swords].type = type;
                swords++;
                return true;
            }
            else
            {
                cout << "Inventory full for Swords!" << endl;
                return false;
            }
        }
        else
        {
            cout << "Invalid item type!" << endl;
            return false;
        }
    }

    bool UseHealthPotion()
    {
        if (healthPotions > 0)
        {
            healthPotions--;
            cout << "Health potion used. Remaining potions: " << healthPotions << endl;
            return true;
        }
        else
        {
            cout << "No health potions left!" << endl;
            return false;
        }
    }

    void DisplayInventory()
    {
        cout << "Inventory:" << endl;
        cout << "  Health Potions: " << healthPotions << "/" << maxHealthPotions << endl;
        cout << "  Swords: " << swords << "/" << maxSwords << endl;
    }
};

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
        else if (ch == 2)
        {
            cout << "you get a sword from the chest" << endl;
            return 2;
        }
    }
    return 4;
}

void myturn(int attack, int enemyDefense, int &enemyHealth)
{
    int damage = (attack * (rand() % 3)) - enemyDefense;
    if (damage <= 0)
    {
        damage = 0;
        cout << "Miss!";
    }
    else
    {
        cout << "Hit!!";
    }
    enemyHealth -= damage;
    cout << "You deal " << damage << " points of damage!\n";
}

void enemyTurn(int enemyAttack, int defense, int &health)
{
    int enemyDamage = (enemyAttack * (rand() % 3)) - defense;
    if (enemyDamage < 0)
    {
        enemyDamage = 0;
        cout << "Miss!";
    }
    else
    {
        cout << "Hit!!";
    }
    health -= enemyDamage;
    cout << "The enemy attacks you for " << enemyDamage << " points of damage!\n";
}

void enemyTurn(int enemyAttack, int &health)
{
    int enemyDamage = (enemyAttack * (rand() % 3));
    if (enemyDamage < 0)
    {
        enemyDamage = 0;
        cout << "Miss!";
    }
    else
    {
        cout << "Hit!!";
    }
    health -= enemyDamage;
    cout << "The enemy attacks you for " << enemyDamage << " points of damage!\n";
}

int play(int health, int attack, int defense, int monster, Inventory Inventory)
{
    int enemyHealth;
    int enemyAttack;
    int enemyDefense;

    if (monster == 0)
    {
        goblin goblin;
        enemyHealth = goblin.Health;
        enemyAttack = goblin.Attack;
        enemyDefense = goblin.Defence;
        cout << "A herd of goblin spot you" << endl;
    }
    else if (monster == 1)
    {
        knight knight;
        enemyHealth = knight.Health;
        enemyAttack = knight.Attack;
        enemyDefense = knight.Defence;
        cout << "A knight appears" << endl;
    }
    else if (monster == 2)
    {
        dragon dragon;
        enemyHealth = dragon.Health;
        enemyAttack = dragon.Attack;
        enemyDefense = dragon.defence;
        cout << "you see a huge dragon" << endl;
    }
    int enemycount;
    if (monster == 0)
    {
        enemycount = 4;
    }
    else if (monster == 1)
    {
        enemycount = 1;
    }
    else if (monster == 2)
    {
        enemycount = 1;
    }
    int temp = 1;
    while (enemyHealth > 0 || enemycount > 0)
    {

        cout << "\nYour health: " << health << endl;
        cout << "Enemy health: " << enemyHealth << endl;
        cout << "What do you do?\n";
        cout << "1. Attack\n";
        cout << "2. Defend\n";
        cout << "3. Check inventory\n";

        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            myturn(attack, enemyDefense, enemyHealth);
            break;
        }
        case 2:
        {
            cout << "You brace yourself for the enemy attack.\n";
            break;
        }
        case 3:
        {

            cout << "You check your inventory...\n";
            Inventory.DisplayInventory();
            break;
        }
        default:
        {
            cout << "you have wasted your chance. You do nothing.\n";
            break;
        }
        }

        if (enemyHealth <= 0)
        {
            cout << "You have defeated the enemy!\n";
            cout << "you have found a chest" << endl;
            // AddItem(getitemtype(getChestLoot(1)));
            enemycount--;
        }
        while (enemyHealth > 0)
        {
            if (choice == 1)
            {
                enemyTurn(enemyAttack, health);
            }
            else
            {
                enemyTurn(enemyAttack, defense, health);
            }
        }
        if (monster == 0)
        {
            enemyHealth = 20;
        }
        else if (monster == 1)
        {

            enemyHealth = 100;
        }
        else if (monster == 2)
        {
            enemyHealth = 300;
        }

        if (health <= 0)
        {
            cout << "You have been defeated!\n";
            return 0;
        }
    }
    cout << "exiting function" << endl;
    return health;
}

int main()
{
    character player;
    Inventory Inventory;
    int again = 1;
    int health = player.characterHealth;
    int attack = player.characterAttack;
    int defense = player.charactershield;

    cout << "You were born into a once-great lineage of monster hunters, wielding a legendary weapon passed down through generations. However, a mysterious calamity shattered your family and scattered the weapon's fragments. Now, whispers of renewed monstrous activity draw you on a quest to reclaim your heritage and restore balance to the world.\n";

    do
    {
        while (health > 0)
        {
            health = play(health, attack, defense, 0, Inventory);
            health = play(health, attack, defense, 1, Inventory);
            health = play(health, attack, defense, 2, Inventory);
        }
    } while (again == 1);

    cout << "Thanks for playing!\n";

    return 0;
}
