#include "Player.h"
#include <iostream>
using namespace std;

int main() {

    Player hero;
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