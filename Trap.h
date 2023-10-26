#ifndef TRAP_H
#define TRAP_H


using namespace std;
#include "Cell.h"
#include "Effect.h"

class Trap : public Cell, public Effect {
 protected:
  bool active;

 public:
  Trap(int x, int y) : Cell(x, y, 'T') {}
  bool isActive() { return active; }
  void apply(Cell& cell) {
    cell.setType('T');
    active = false;
  }
};

#endif