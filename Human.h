// Worked with Savinu student:a1827979
#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"

class Human : public Player {
 public:
  char move;
  std::string name = "";
  Human();
  Human(std::string Name);
  char makeMove();
  std::string getName();
};
#endif
