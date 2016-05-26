//
//  GameManager.h
//  ACSII Maze
//
//  Created by Chien on 5/19/16.
//  Copyright © 2016 OPz. All rights reserved.
//

#ifndef GameManager_h
#define GameManager_h
#include <iostream>
#include <string>
#include "MazeLevel.h"
#include "Player.h"


using namespace std;

class GameManager{
    
public:
    GameManager(string level);
    void loadGame();
    void getInput(bool isDone);
    
private:
    MazeLevel mazeLevel;
    Player player;
};

#endif /* GameManager_h */
