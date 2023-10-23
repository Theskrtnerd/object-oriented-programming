#include <iostream>

#include "Game.h"

#include <tuple>

 

int main() {

    Game myGame;

    myGame.initGame(1, 1, 10, 10);

    std::cout << "Initiate a game with 1 ship and 1 Mine\n";

    for (auto entity : myGame.get_entities()) {

        std::cout << "Entity Type: " << entity->getType() << "\n";

    }

    std::cout << "------------------\n";

    std::cout << "After the game finishes\n";

    myGame.gameLoop(1, 100.0);

 

    for (auto entity : myGame.get_entities()) {

        std::cout << "Entity Type: " << entity->getType() << "\n";

    }

    return 0;

}