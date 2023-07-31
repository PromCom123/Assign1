#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>


class Player
{
public:
    char move;
    std::string name;
    virtual char makeMove() = 0;   // Pure virtual function
    virtual std::string getName() = 0; // Pure virtual function
};
#endif