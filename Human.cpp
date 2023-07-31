#include "Human.h"
using namespace std;

    char Human::makeMove() 
    {
        char move;
        cout << "Enter move: ";
        cin >> move;
        while(move != 'R' && move != 'S' && move !='P'){
        cout<<"Enter move: ";
        cin>> move;
        }
        return move;
    };

    string Human::getName() 
    {
        string name;
        cout<< "Enter name: ";
        cin>> name;
        if(name==""){
            return "Human";
        } else {
            return name;
        }
        
    };


