#include "Player.h"
#include <iostream>
using namespace std;

int main() {

    Player hero;
   
    Item sword("Sword", 50);
    Item bonnet("Bonnet", 150);
    Item boots("Boots", 10);
    Item junk;

    hero.addItem(sword);
    hero.addItem(bonnet);
    hero.addItem(boots);
    hero.addItem(junk);

    cout << "The total number of items is: " << Items::getTotalItems() << endl;
   
    Player wizard("Momo", 120, 15);

    cout << "---Initial Status---" << endl;
    hero.displayStatus();
    wizard.displayStatus();

    hero.takeDamage(25);
    hero.displayStatus();
    
    wizard.takeDamage(150);
    wizard.displayStatus();

    return 0;
}