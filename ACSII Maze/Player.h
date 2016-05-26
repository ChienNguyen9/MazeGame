//
//  Player.h
//  ACSII Maze
//
//  Created by Chien on 5/19/16.
//  Copyright © 2016 OPz. All rights reserved.
//

#ifndef Player_h
#define Player_h

class Player{
    
public:
    Player();
    void setPlayerPosition(int x, int y);
    void getPlayerPosition(int &x, int &y);
    
private:
    int _x;
    int _y;
};

#endif /* Player_h */
