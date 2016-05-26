//
//  Player.cpp
//  ACSII Maze
//
//  Created by Chien on 5/19/16.
//  Copyright © 2016 OPz. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "Player.h"

using namespace std;

Player::Player(){
    _x = 0;
    _y = 0;
}

void Player::setPlayerPosition(int x, int y){
    _x = x;
    _y = y;
}

void Player::getPlayerPosition(int &x, int &y){
    x = _x;
    y = _y;
}
