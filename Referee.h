// Worked with Savinu student:a1827979
#ifndef REFEREE_H
#define REFEREE_H
#include <iostream>
#include <string>

#include "Player.h"
using namespace std;

class Referee {
 public:
  Referee();
  Player *refGame(Player *player1, Player *player2);
};
#endif