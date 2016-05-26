//
//  GameManager.cpp
//  ACSII Maze
//
//  Created by Chien on 5/19/16.
//  Copyright © 2016 OPz. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <string>
#include "GameManager.h"
#include "MazeLevel.h"
#include "Player.h"

using namespace std;
 
GameManager::GameManager(string level){
    mazeLevel.load(level, player);
}

void GameManager::loadGame(){
    bool isDone = false;
    while(!isDone){
        mazeLevel.print();
        getInput(isDone);
    }
}

void GameManager::getInput(bool isDone){
    char input;
    cout << "Enter e to exit the game! " << endl;
    cout << "Enter w/s/a/d: ";
    cin >> input;
    mazeLevel.movingPlayer(isDone, input, player);
}