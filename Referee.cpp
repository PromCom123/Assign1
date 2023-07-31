#include "Referee.h"

using namespace std;

//Referee class

    Referee::Referee(){

    };
    Player * Referee::refGame(Player * player1, Player * player2)
    {
        char computerMove = player1->makeMove();
        char humanMove = player2->makeMove();


        if (computerMove == humanMove)
            return nullptr;
        else if ((computerMove == 'P' && humanMove == 'R') ||
                 (computerMove == 'R' && humanMove == 'S') ||
                 (computerMove == 'S' && humanMove == 'P'))
            return player1;
        else
            return player2;

    };
