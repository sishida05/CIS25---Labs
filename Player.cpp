#include "Player.h"
#include <iostream>
using namespace std;

Player::Player() {
    name = "Hero";
    health = 100;
    maxHealth = 100;
    attackPower = 10;
}

Player::Player(string name, int health, int attackPower) {
    this->name = name;
    this->health = health;
    this->attackPower = attackPower;
    this->maxHealth = health;
}

Player::~Player() {
    cout << "The object for " << name << " has been destroyed." << endl;
}

string Player::getName() const {
    return name;
}

int Player::getHealth() const {
    return health;
}

int Player::getMaxHealth() const {
    return maxHealth;
}

int Player::getAttack() const {
    return attackPower;
}

void Player::takeDamage(int damage) {
    cout << "---" << name << " takes damage!---" << endl;
    if (damage > health) {
        health = 0;
    } else {
        health -= damage;
    }
    if(health <= 0) {
        cout << name << " falls to the ground, defeated." << endl;
    }
}

void Player::displayStatus() {
    cout << name << " - HP: " << health << "/" << maxHealth << endl;
}