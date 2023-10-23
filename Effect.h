#ifndef EFFECT_H
#define EFFECT_H

#include "GameEntity.h"
#include <tuple>

class Effect{
    public:
        Effect(){};
        virtual void apply(GameEntity& entity){};
        ~Effect(){};
};

#endif