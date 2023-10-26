#include <iostream>
using namespace std;

#include "Cell.h"
#include "Utils.h"
#include "Trap.h"
#include "Character.h"
#include "Game.h"
#include <vector>

int main(){
    Game game;
    Cell cell1(1,3,'C');
    Cell cell2(4,7,'C');
    Trap trap(1,9);
    Character user(1,8);
    cout << user.getType() << endl;
    cout << std::get<0>(user.getPos()) << ", " << std::get<1>(user.getPos()) << endl;
    user.move(0,1);
    cout << std::get<0>(user.getPos()) << ", " << std::get<1>(user.getPos()) << endl;
    trap.apply(user);
    cout << user.getType() << endl;
    
    cout << Utils::calculateDistance(cell1.getPos(), cell2.getPos()) << endl;


    cout << "Game starts" << endl;
    cout << "------------------" << endl;

    game.initGame(1, 1, 3, 4);
    vector grid = game.getGrid();
    cout << "Current position of game objects: " << endl;
    for (int i = 0; i < grid.size(); i++)
    {
        cout << grid[i]->getType() << ": " << get<0>(grid[i]->getPos()) << ", " << get<1>(grid[i]->getPos()) << endl;
    }
    
    game.gameLoop(10, 2);

    cout << "Current position of game objects: " << endl;
    for (int i = 0; i < grid.size(); i++)
    {
        cout << grid[i]->getType() << ": " << get<0>(grid[i]->getPos()) << ", " << get<1>(grid[i]->getPos()) << endl;
    }

    cout << "------------------" << endl;
    cout << "Game ended!" << endl;

}