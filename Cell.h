#ifndef CELL_H
#define CELL_H

#include <tuple>

class Cell{
    private:
        std::tuple<int, int> position;
        char type;

    public:
        Cell(){}
        Cell(int x, int y, char type): type(type){
            std::tuple<int, int> position_(x, y);
            this->position = position_;
        }
        std::tuple<int, int> getPos(){
            return this->position;
        }
        char getType(){
            return this->type;
        }
        void setPos(int x, int y){
            std::tuple<int, int> position_(x, y);
            this->position = position_;
        }
        void setType(char type){
            this->type = type;
        }
};

#endif