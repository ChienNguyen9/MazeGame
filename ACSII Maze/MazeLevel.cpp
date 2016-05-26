//
//  MazeLevel.cpp
//  ACSII Maze
//
//  Created by Chien on 5/19/16.
//  Copyright © 2016 OPz. All rights reserved.
//

#include <iostream>
#include <fstream>
#include "MazeLevel.h"
#include "Player.h"

using namespace std;

MazeLevel::MazeLevel(){
    
}

void MazeLevel::load(string level, Player &player){
    ifstream levelFile;
    
    levelFile.open(level);
    if(levelFile.fail()){
        cout << "CANNOT OPEN: " << level << endl;
        exit(1);
    }
    
    string line;
    
    while(getline(levelFile, line)){
        levelData.push_back(line);
    }
    
    levelFile.close();
    
    for(int i = 0; i < levelData.size(); i++){
        for(int j = 0; j < levelData[i].size(); j++){
            if(levelData[i][j] == '@'){
                player.setPlayerPosition(j, i);
            }
        }
    }
}

void MazeLevel::print(){
    cout << string(100, '\n') << endl;
    for(int i = 0; i < levelData.size(); i++){
        cout << levelData[i] << endl;
    }
}

void MazeLevel::movingPlayer(bool isDone, char input, Player &player){
    int playerX;
    int playerY;
    player.getPlayerPosition(playerX, playerY);
    char tile;
    
    switch(input){
        case 'W':
        case 'w':
            tile = getTile(playerX, playerY - 1);
            switch(tile){
                case '.':
                    player.setPlayerPosition(playerX, playerY - 1);
                    setTile(playerX, playerY - 1, '@');
                    setTile(playerX, playerY, '.');
                    break;
                case '!':
                    cout << "YOU WIN!!!" << endl;
                    exit(1);
                    break;
            }
            break;
        case 'S':
        case 's':
            tile = getTile(playerX, playerY + 1);
            switch(tile){
                case '.':
                    player.setPlayerPosition(playerX, playerY + 1);
                    setTile(playerX, playerY +  1, '@');
                    setTile(playerX, playerY, '.');
                    break;
                case '!':
                    cout << "YOU WIN!!!" << endl;
                    exit(1);
                    break;
            }
            break;
        case 'A':
        case 'a':
            tile = getTile(playerX - 1, playerY);
            switch(tile){
                case '.':
                    player.setPlayerPosition(playerX - 1, playerY);
                    setTile(playerX - 1, playerY, '@');
                    setTile(playerX, playerY, '.');
                    break;
                case '!':
                    cout << "YOU WIN!!!" << endl;
                    exit(1);
                    break;
            }
            break;
        case 'D':
        case 'd':
            tile = getTile(playerX + 1, playerY);
            switch(tile){
                case '.':
                    player.setPlayerPosition(playerX + 1, playerY);
                    setTile(playerX + 1, playerY, '@');
                    setTile(playerX, playerY, '.');
                    break;
                case '!':
                    cout << "YOU WIN!!!" << endl;
                    exit(1);
                    break;
            }
            break;
        case 'e':
        case 'E':
            cout << "You quit! Can't even beat a simple game. *sigh* " << endl;
            exit(1);
            break;
        default:
            cout << "INVALID MOVEMENT! " << endl;
            break;
    }
}

char MazeLevel::getTile(int x, int y){
    return levelData[y][x];
}

void MazeLevel::setTile(int x, int y, char spot){
    levelData[y][x] = spot;
}