#ifndef CHARACTER_H
#define CHARACTER_H

using namespace std;
#include <tuple>

#include "Cell.h"
#include "Effect.h"

class Character : public Cell {
    protected:
        bool active;

    public:
        Character(int x, int y) : Cell(x, y, 'C') {}
        void move(int dx, int dy) {
            int x = get<0>(getPos());
            int y = get<1>(getPos());
            tuple<int, int> newPos = make_tuple(dx + x, dy + y);
            setPos(dx + x, dy + y);
        }
};

#endif