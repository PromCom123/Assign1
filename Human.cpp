// Worked with Savinu student:a1827979
#include "Human.h"
using namespace std;
// Human class definition
Human::Human() { name = "Human"; };

Human::Human(std::string Name) { name = Name; };

char Human::makeMove() {
  cout << "Enter move: ";
  cin >> move;
  return move;
};

string Human::getName() { return name; };
