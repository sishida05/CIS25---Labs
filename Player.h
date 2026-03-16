#ifndef PLAYER_H
#define PLAYER_H
#include "Inventory.h"
#include <iostream>
using namespace std;

class Player {

    private:
        string name;
        int health;
        int maxHealth;
        int attackPower;
        Inventory inventory;

    public:
        // Constructors
        Player();
        Player(string name, int health, int attackPower);
        ~Player();

        // Getters
        string getName() const;
        int getHealth() const;
        int getMaxHealth() const;
        int getAttack() const;

        // Functions
        void displayStatus();
        void takeDamage(int damage);
        void showInventory() const;
        void addItem(const Item& item);

};

#endif
