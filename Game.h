#ifndef GAME_H
#define GAME_H

#include <vector>

#include "Effect.h"
#include "Explosion.h"
#include "GameEntity.h"
#include "Mine.h"
#include "Ship.h"
#include "Utils.h"
using namespace std;

class Game {
 private:
  vector<GameEntity*> entities;

 public:
  std::vector<GameEntity*> get_entities() { return entities; }
  void set_entities(const std::vector<GameEntity*>& newEntities) {
    entities = newEntities;
  }
  std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth,
                                    int gridHeight) {
    std::vector<GameEntity*> newEntities;
    for (int i = 0; i < numShips; i++) {
      std::tuple<int, int> shipPos =
          Utils::generateRandomPos(gridWidth, gridHeight);
      newEntities.push_back(
          new Ship(std::get<0>(shipPos), std::get<1>(shipPos)));
    }

    for (int i = 0; i < numMines; i++) {
      std::tuple<int, int> minePos =
          Utils::generateRandomPos(gridWidth, gridHeight);
      newEntities.push_back(
          new Mine(std::get<0>(minePos), std::get<1>(minePos)));
    }

    set_entities(newEntities);
    return get_entities();
  }
  void gameLoop(int maxIterations, double mineDistanceThreshold) {
    int iterations = 0;
    while (iterations < maxIterations) {
      for (GameEntity* entity : entities) {
        if (dynamic_cast<Ship*>(entity)) {
          Ship* ship = dynamic_cast<Ship*>(entity);
          ship->move(1, 0);
        }
        if (dynamic_cast<Mine*>(entity)) {
          Mine* mine = dynamic_cast<Mine*>(entity);
          for (GameEntity* shipEntity : entities) {
            if (dynamic_cast<Ship*>(shipEntity)) {
              Ship* ship = dynamic_cast<Ship*>(shipEntity);
              double distance =
                  Utils::calculateDistance(mine->getPos(), ship->getPos());
              if (distance <= mineDistanceThreshold) {
                Explosion e1 = mine->explode();
                e1.apply(*ship);
              }
            }
          }
        }
      }
      iterations++;
    }
  }
};

#endif