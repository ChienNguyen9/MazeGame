//
//  GenerateLevel.cpp
//  ACSII Maze
//
//  Created by zCatchMee on 8/19/16.
//  Copyright © 2016 OPz. All rights reserved.
//

#include <stdio.h>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include "GenerateLevel.h"

GenerateLevel::GenerateLevel(){
    
}

std::string GenerateLevel::levelNumber(){
    int number = 0;
    srand(time(NULL));
    number = rand()%5 + 1;
    if(number == 1)
        return "1.txt";
    else if(number == 2)
        return "2.txt";
    else if(number == 3)
        return "3.txt";
    else if(number == 4)
        return "4.txt";
    else
        return "5.txt";
}