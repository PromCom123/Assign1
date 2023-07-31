#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>


class Player
{
public:
    virtual char makeMove() = 0;   // Pure virtual function
    virtual string getName() = 0; // Pure virtual function
};
#endif