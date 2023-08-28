#ifndef WIZARD_H
#define WIZARD_H

#include "player.h"
#include<string>

class Wizard: public Player {
  private:
    int mana;
  public:
    Wizard(std::string name, int health, int damage, int mana);
    void castSpell(Player* opponent);
};

#endif