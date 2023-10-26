#ifndef GAME_H
#define GAME_H

using namespace std;
#include <iostream>
#include <tuple>
#include <vector>

#include "Cell.h"
#include "Character.h"
#include "Effect.h"
#include "Trap.h"
#include "Utils.h"

class Game {
 private:
  std::vector<Cell*> grid;
  int width;
  int height;

 public:
  Game() {}
  std::vector<Cell*>& getGrid() { return grid; }
  void setGrid(vector<Cell*> newGrid) { grid = newGrid; }
  void initGame(int numCharacters, int numTraps, int gridWidth,
                int gridHeight) {
    width = gridWidth;
    height = gridHeight;
    vector<Cell*> newGrid;
    for (int i = 0; i < numCharacters; i++) {
      tuple<int, int> pos = Utils::generateRandomPos(gridWidth, gridHeight);
      int x = get<0>(pos);
      int y = get<1>(pos);
      newGrid.push_back(new Character(x, y));
    }
    for (int i = 0; i < numTraps; i++) {
      tuple<int, int> pos = Utils::generateRandomPos(gridWidth, gridHeight);
      int x = get<0>(pos);
      int y = get<1>(pos);
      newGrid.push_back(new Trap(x, y));
    }
    setGrid(newGrid);
  }
  void gameLoop(int maxIterations, double trapActivationDistance) {
    bool winCon = false;
    int iter = 0;
    while (iter < maxIterations) {
      for (Cell* cell : grid) {
        if (dynamic_cast<Character*>(cell)) {
          Character* character = dynamic_cast<Character*>(cell);
          character->move(1, 0);
          int x = get<0>(character->getPos());
          int y = get<1>(character->getPos());
          if (x > width || y > height) {
            winCon = true;
            goto end;
          }
        }
        if (dynamic_cast<Trap*>(cell)) {
          Trap* trap = dynamic_cast<Trap*>(cell);
          for (Cell* character : grid) {
            if (dynamic_cast<Character*>(character)) {
              Character* character = dynamic_cast<Character*>(character);
              double dist =
                  Utils::calculateDistance(trap->getPos(), character->getPos());
              if (dist <= trapActivationDistance) {
                trap->apply(*character);
              }
            }
          }
        }
      }
      iter++;
    }
    if (iter >= maxIterations) {
      cout << "Maximum number of iterations reached. Game over." << endl;
    }

  end:
    if (winCon == true) {
      cout << "Character has won the game!" << endl;
    }
  }
};

#endif
