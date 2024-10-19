#include <iostream>
#include <cstdlib>
#include <ctime>

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

struct Goblin
{
    int health = 20;
    int attack = 10;
    int defense = 0;
};

struct Knight
{
    int health = 100;
    int attack = 50;
    int defense = 15;
};

struct Dragon
{
    int health = 300;
    int attack = 100;
    int defense = 30;
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

    int getItemType(int itemCode)
    {
        return itemCode;
    }

    bool addItem(int itemCode)
    {
        int type = getItemType(itemCode);
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

    bool useHealthPotion()
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

    void displayInventory()
    {
        cout << "Inventory:" << endl;
        cout << "  Health Potions: " << healthPotions << "/" << maxHealthPotions << endl;
        cout << "  Swords: " << swords << "/" << maxSwords << endl;
    }
};

int getChestLoot(int choice)
{
    int ch;
    if (choice == 1)
    {
        ch = rand() % 7;
    }
    else if (choice == 2)
    {
        ch = rand() % 4;
    }
    else if (choice == 3)
    {
        ch = rand() % 2;
    }
    else
    {
        return 4;
    }

    if (ch == 0)
    {
        cout << "You get a basic potion from the chest!" << endl;
        return 0;
    }
    else if (ch == 2)
    {
        cout << "You get a sword from the chest!" << endl;
        return 2;
    }
    else
    {
        cout << " nothing in the chest." << endl;
        return 3;
    }
}

void myTurn(int attack, int enemyDefense, int &enemyHealth)
{
    int damage = (attack * (rand() % 3)) - enemyDefense;
    if (damage <= 0)
    {
        damage = 0;
        cout << "Miss!";
    }
    else
    {
        cout << "Hit!";
    }
    enemyHealth -= damage;
    cout << " You deal " << damage << " points of damage!" << endl;
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
        cout << "Hit!";
    }
    health -= enemyDamage;
    cout << " The enemy attacks you for " << enemyDamage << " points of damage!" << endl;
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
        cout << "Hit!";
    }
    health -= enemyDamage;
    cout << " The enemy attacks you for " << enemyDamage << " points of damage!" << endl;
}

int play(int &health, int attack, int defense, int monster, Inventory &inventory)
{
    int enemyHealth, enemyAttack, enemyDefense;
    int enemyCount = 1;

    if (monster == 0)
    {
        Goblin goblin;
        enemyHealth = goblin.health;
        enemyAttack = goblin.attack;
        enemyDefense = goblin.defense;
        enemyCount = 4;
        cout << "A herd of goblins spot you." << endl;
    }
    else if (monster == 1)
    {
        Knight knight;
        enemyHealth = knight.health;
        enemyAttack = knight.attack;
        enemyDefense = knight.defense;
        cout << "A knight appears." << endl;
    }
    else if (monster == 2)
    {
        Dragon dragon;
        enemyHealth = dragon.health;
        enemyAttack = dragon.attack;
        enemyDefense = dragon.defense;
        cout << "You see a huge dragon." << endl;
    }

    while (health > 0 && (enemyHealth > 0 || enemyCount > 0))
    {
        cout << "\nYour health: " << health << endl;
        cout << "Enemy health: " << enemyHealth << endl;
        cout << "What do you do?\n1. Attack\n2. Defend\n3. Use Health Potion\n4. Check inventory\n";
        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
            myTurn(attack, enemyDefense, enemyHealth);
            break;
        case 2:
            cout << "You brace yourself for the enemy attack.\n";
            break;
        case 3:
            if (!inventory.useHealthPotion())
            {
                cout << "You do nothing this turn.\n";
            }
            else
            {
                health += 20;
                cout << "Health restored to " << health << endl;
            }
            break;
        case 4:
            cout << "You check your inventory...\n";
            inventory.displayInventory();
            break;
        default:
            cout << "You have wasted your chance. You do nothing.\n";
            break;
        }

        if (enemyHealth > 0)
        {
            if (choice == 2)
            {
                enemyTurn(enemyAttack, defense, health);
            }
            else
            {
                enemyTurn(enemyAttack, health);
            }
        }

        if (enemyHealth <= 0)
        {
            cout << "You have defeated the enemy!\n";
            if (monster == 0 && enemyCount > 1)
            {
                enemyCount--;
                enemyHealth = 20;
                cout << "Another goblin appears!\n";
            }
            else
            {
                cout << "You have found a chest!\n";
                inventory.addItem(getChestLoot(1));
                break;
            }
        }

        if (health <= 0)
        {
            cout << "You have been defeated!\n";
            return 0;
        }
    }
    // cout << "Exiting function\n";
    return health;
}

int main()
{
    srand(time(0));

    Character player;
    Inventory inventory;
    int health = player.health;
    int attack = player.attack;
    int defense = player.shield;

    cout << "You were born into a once-great lineage of monster hunters, wielding a legendary weapon passed down through generations. However, a mysterious calamity shattered your family and scattered the weapon's fragments. Now, whispers of renewed monstrous activity draw you on a quest to reclaim your heritage and restore balance to the world.\n";

    cout << "Your journey begins in your ancestral village, now shrouded in an unnatural darkness. An elder approaches you, his face etched with worry.\n";
    cout << "\"Greetings, young one,\" the elder rasps.  \"The Blight has returned, and the whispers speak of a dragon at its heart. You must find the scattered fragments of the Dragonslayer and defeat the beast! But before you leave, take this.\"\n";
    cout << "The elder hands you a worn leather satchel. Inside, you find a single healing potion.\n";

    cout << "With a heavy heart, you depart the village and head towards the rumored location of the first fragment - a dark and ancient forest.\n";
    health = play(health, attack, defense, 0, inventory);

    if (health <= 0)
    {
        return 0;
    }

    cout << "Exhausted but victorious, you emerge from the forest. You open the chest you found and find...\n";

    inventory.addItem(getChestLoot(1));

    cout << "Following rumors, you arrive at a crumbling castle, said to hold another fragment. But a lone knight now guards its entrance.\n";
    health = play(health, attack, defense, 1, inventory);

    if (health <= 0)
    {
        return 0;
    }

    cout << "You open the chest within the castle and find...\n";
    inventory.addItem(getChestLoot(1));

    health = play(health, attack, defense, 2, inventory);

    cout << "Finally, you reach a volcanic wasteland, the dragon's lair. The air crackles with raw magic. Steel yourself, for the final battle awaits...\n";
    if (health <= 0)
    {
        cout << "You were defeated by the dragon. Better luck next time!\n";
    }
    else
    {
        cout << "Congratulations! You have defeated the dragon and restored balance to the world!\n";
    }

    return 0;
}
