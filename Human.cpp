#include "Human.h"
using namespace std;

    Human::Human(){
        
        name= "Human";
    };
    
    Human::Human(std::string Name){
        name = Name;
    };

    char Human::makeMove() 
    {
        cout << "Enter move: ";
        cin >> move;
        
    };

    string Human::getName() 
    {
        
        return name;
        
    };


