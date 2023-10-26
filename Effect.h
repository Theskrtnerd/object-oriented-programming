#ifndef EFFECT_H
#define EFFECT_H

#include "Cell.h"

class Effect{
  public:
    Effect(){};
    virtual void apply(Cell& cell){};
};

#endif