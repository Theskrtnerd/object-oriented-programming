#pragma once
using namespace std;
#include "Cell.h"

class Effect {
 public:
  virtual void apply(Cell& cell) {}
};