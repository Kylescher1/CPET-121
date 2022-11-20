#include "hangPerson.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <string>

int main() {

    std::string word = "none";
    int turn = 0;

    //gamestart
    std::cout << "Welcome to hangperson!" << std::endl;

    word = selectWord(word);
    std::cout << word;

    display(turn);


    //call game input
    //gameInput(word);

    //call display with 
}