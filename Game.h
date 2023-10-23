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
    public:
        Game();
        std::vector<GameEntity*> get_entities(){
            return entities;
        };
        void set_entities(std::vector<GameEntity*> entities_){
            entities = entities_;
        };
        std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight){
            Utils util;
            for(int i=0;i<numShips;i++){
                std::tuple<int, int> pos = util.generateRandomPos(gridHeight, gridHeight);
                int x = std::get<0>(pos);
                int y = std::get<1>(pos);
                entities.push_back(new Ship(x, y));
            }
            for(int i=0;i<numMines;i++){
                std::tuple<int, int> pos = util.generateRandomPos(gridHeight, gridHeight);
                int x = std::get<0>(pos);
                int y = std::get<1>(pos);
                Mine* mine = new Mine(x, y);
                entities.push_back(mine);
            }
            return entities;
        }
        void gameLoop(int maxIterations, double mineDistanceThreshold){
            Utils util;
            for(int i=0; i<maxIterations; i++){
                for(int j=0; j<entities.size();j++){
                    if(entities[j]->getType() == 'S'){
                        entities[j]->move(1,0);
                    }
                }
                loop:
                    for(int j=0; j<entities.size();j++){
                        for(int k=0;k<entities.size();k++){
                            if(entities[j]->getType() == 'S' && entities[k]->getType()=='M' && util.calculateDistance(entities[j]->getPos(), entities[k]->getPos()) < mineDistanceThreshold){
                                Explosion explosion = entities[k]->explode();
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
                        goto end;
                    }
                
            }
            end:
                std::cout << "Game ended" << std::endl;
        }

};

#endif