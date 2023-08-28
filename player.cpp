#include "player.h"
#include <iostream>
using namespace std;

Player::Player(std::string name, int health, int damage){
  this->name = name;
  this->health = health;
  this->damage = damage;
}

void Player::attack(Player* opponent, int damage){
  opponent->takeDamage(damage);
}

void Player::takeDamage(int damage){
  this->health -= damage;
  std::cout << this->name << " takes " << damage << " damage. Remaining health: " << this->health << "\n";
}

string Player::getName(){
  return this->name;
}

int Player::getDamage(){
  return this->damage;
}

int Player::getHealth(){
  return this->health;
}