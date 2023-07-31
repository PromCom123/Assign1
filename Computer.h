// Worked with Savinu student:a1827979
#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"

class Computer : public Player {
 public:
  std::string getName();  // getName function in Computer
  char makeMove();        // makeMove function in Computer
};
#endif