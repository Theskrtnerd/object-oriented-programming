#ifndef GAME_H
#define GAME_H

#include <vector>
#include "GameEntity.h"
#include "Ship.h"
#include "Mine.h"
#include "Utils.h"
#include <iostream>

class Game{
    private:
        std::vector<GameEntity*> entities;
        std::vector<Ship> ships;
        std::vector<Mine> mines;
    public:
        Game(){
        };
        std::vector<GameEntity*> get_entities(){
            return entities;
        };
        void set_entities(std::vector<GameEntity*> entities_){
            entities = entities_;
        };
        std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight){
            // Utils util;
            this->ships.resize(numShips);
            this->mines.resize(numMines);
            this->entities.resize(numShips+numMines);
            for(int i=0;i<numShips;i++){
                std::tuple<int, int> pos = Utils::generateRandomPos(gridHeight, gridHeight);
                int x = std::get<0>(pos);
                int y = std::get<1>(pos);
                this->ships[i] = Ship(x,y);
                this->entities[i] = &this->ships[i];
            }
            for(int j=0;j<numMines;j++){
                std::tuple<int, int> pos = Utils::generateRandomPos(gridHeight, gridHeight);
                int x = std::get<0>(pos);
                int y = std::get<1>(pos);
                this->mines[j] = Mine(x,y);
                this->entities[numShips+j] = &this->mines[j];
            }
            return entities;
        }
        void gameLoop(int maxIterations, double mineDistanceThreshold){
            Utils util;
            for(int i=0; i<maxIterations; i++){
                for(int j=0; j<ships.size();j++){
                    ships[j].move(1,0);
                }
                loop:
                    for(int j=0; j<ships.size();j++){
                        for(int k=0;k<mines.size();k++){
                            if(util.calculateDistance(ships[j].getPos(), mines[k].getPos()) < mineDistanceThreshold){
                                Explosion explosion = mines[k].explode();
                                explosion.apply(ships[j]);
                                goto check;
                            }
                        }
                    }
                check:
                    bool isShip = false;
                    for(int i=0; i<entities.size(); i++){
                        if(entities[i]->getType() == 'S'){
                            isShip = true;
                        }
                    }
                    if(!isShip){
                        return;
                    }

            }
        }

};

#endif