#include"wizard.h"
#include"player.h"
#include<iostream>
using namespace std;

Wizard::Wizard(string name, int health, int damage, int mana) : Player(name, health, damage){
  this->mana = mana;
}

void Wizard::castSpell(Player* opponent){
  std::cout << this->getName() << " casts a spell on " << opponent->getName() << " for " << this->mana << " damage.\n";
  this->attack(opponent, this->mana);
};