#include "hangPerson.h"
#include <iostream>

int main(){

    std::string word;

    //gamestart
    std::cout << "Welcome to hangperson!" << std::endl;
    
    //call diplay with 

    display(0);

    //call select word
    word = randomWord();

    //call game input
    gameInput(word);

    //call display with 
}