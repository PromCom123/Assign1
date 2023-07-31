#include "Human.h"


using namespace std;

    char Human::makeMove() 
    {
        char move;
        cout << "Enter move: ";
        cin >> move;
        while(move != "R" ||"S" ||"P"){
        cout<<"Enter move: "
        cin>> move;
        }
        return move;
    };

    string Human::getName() const 
    {
        string name;
        cout<< "Enter name: "
        cin>> name;
        if(name==""){
            return "Human";
        } else {
            return name;
        }
        
    };


