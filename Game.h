#ifndef GAME_H
#define GAME_H

#include <vector>
#include "Cell.h"
#include "Trap.h"
#include "Utils.h"
#include "Character.h"
#include <iostream>

class Game{
    private:
        std::vector<Cell*> grid;
        std::vector<Character> players;
        std::vector<Trap> traps;
        int gridWidth;
        int numPlayers;
        int numTraps;

    public:
        Game(){}
        std::vector<Cell*>& getGrid(){
            return this->grid;
        }

        void initGame(int numCharacters, int numTraps, int gridWidth, int gridHeight){
            this->gridWidth = gridWidth;
            this->numTraps = numTraps;
            this->numPlayers = numCharacters;

            grid.resize(numCharacters+numTraps);
            players.resize(numCharacters);
            traps.resize(numTraps);

            for(int i=0;i<numCharacters;i++){
                std::tuple<int, int> pos_ = Utils::generateRandomPos(gridWidth, gridHeight);
                int x_ = std::get<0>(pos_);
                int y_ = std::get<1>(pos_);
                Character player(x_, y_);
                players[i] = player;
                Character* player_ptr = &player;
                grid[i] = player_ptr;
            }

            for(int i=0;i<numTraps;i++){
                std::tuple<int, int> pos_ = Utils::generateRandomPos(gridWidth, gridHeight);
                int x_ = std::get<0>(pos_);
                int y_ = std::get<1>(pos_);
                Trap trap(x_, y_);
                traps[i] = trap;
                Trap* trap_ptr = &trap;
                grid[numCharacters+i] = trap_ptr;
            }

        }

        void gameLoop(int maxIterations, double trapActivationDistance){
            int iter = 0;
            while(iter < maxIterations){
                for(int i=0;i<players.size();i++){
                    players[i].move(1,0);
                }
                for(int i=0;i<numTraps;i++){
                    for(int j=0;j<traps.size();j++){
                        if(Utils::calculateDistance(traps[j].getPos(), players[i].getPos()) < trapActivationDistance){
                            traps[j].apply(players[i]);
                        }
                    }
                }

                for(int i=0;i<numPlayers;i++){
                    int player_pos = std::get<0>(players[i].getPos());
                    if(player_pos > this->gridWidth && players[i].getType() == 'C'){
                        "Character has won the game!";
                        return;
                    }
                }

                iter++;
            }
            std::cout << "Maximum number of iterations reached. Game over." << std::endl;
            return;
        }
};

#endif