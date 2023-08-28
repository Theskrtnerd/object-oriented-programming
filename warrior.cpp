#include"warrior.h"
#include"player.h"
#include<iostream>
using namespace std;

Warrior::Warrior(string name, int health, int damage, string weapon) : Player(name, health, damage){
  this->weapon = weapon;
}

void Warrior::swingWeapon(Player* opponent){
  std::cout << this->getName() << " swings their " << this->weapon << " at " << opponent->getName() << "!\n";
  this->attack(opponent, this->getDamage());
};