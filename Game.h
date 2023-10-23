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
        Game(){};
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
                Ship ship(x,y);
                Ship* ship_ptr = &ship;
                entities.push_back(ship_ptr);
                ships.push_back(ship);
            }
            for(int i=0;i<numMines;i++){
                std::tuple<int, int> pos = util.generateRandomPos(gridHeight, gridHeight);
                int x = std::get<0>(pos);
                int y = std::get<1>(pos);
                Mine mine(x,y);
                Mine* mine_ptr = &mine;
                entities.push_back(mine_ptr);
                mines.push_back(mine);
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
                        goto end;
                    }

            }
            end:
                std::cout << "Game ended" << std::endl;
        }

};

#endif