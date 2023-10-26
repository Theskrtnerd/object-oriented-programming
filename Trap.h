#ifndef TRAP_H
#define TRAP_H

#include "Cell.h"
#include "Effect.h"

class Trap: public Cell, public Effect{
    private:
        bool active;
    public:
        Trap(){};
        Trap(int x, int y){
            this->setPos(x, y);
            this->setType('T');
            this->active = true;
        }
        bool isActive(){
            return this->active;
        }
        void apply(Cell& cell){
            cell.setType('T');
            this->active = false;
        }

};

#endif