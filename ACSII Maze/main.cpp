//
//  main.cpp
//  ACSII Maze
//
//  Created by Chien on 5/19/16.
//  Copyright © 2016 OPz. All rights reserved.
//

#include <iostream>
#include <string>
#include "GameManager.h"

using namespace std;

int main() {
    
    GameManager gameManager("level1.txt");
    
    gameManager.loadGame();
    
    return 0;
}
