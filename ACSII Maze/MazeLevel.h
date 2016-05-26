//
//  MazeLevel.h
//  ACSII Maze
//
//  Created by Chien on 5/19/16.
//  Copyright © 2016 OPz. All rights reserved.
//

#ifndef MazeLevel_h
#define MazeLevel_h
#include <vector>
#include <string>
#include "Player.h"

using namespace std;

class MazeLevel{
    
public:
    MazeLevel();
    void load(string level, Player &player);
    void print();
    void movingPlayer(bool isDone, char input, Player &player);
    char getTile(int x, int y);
    void setTile(int x, int y, char spot);
    
private:
    vector <string> levelData;
};


#endif /* MazeLevel_h */
