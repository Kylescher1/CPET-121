#include "hangPerson.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <string>

void diplay(int input) {
    switch (input) {
    case '0':
        std::cout << "+\n|\n|\n|\n|\n|\n|\n|";
        std::cout << "+--------\n";
        break;
    case '1':
        std::cout << "+-----+\n|\n|\n|\n|\n|\n|\n|";
        std::cout << "+--------\n";
        break;
    case '2':
        std::cout << "+-----+\n|     |\n|\n|\n|\n|\n|\n|";
        std::cout << "+--------\n";
        break;
    case '3':
        std::cout << "+-----+\n|     |\n|     O\n|\n|\n|\n|\n|";
        std::cout << "+--------\n";
        break;
    case '4':
        std::cout << "+-----+\n|     |\n|     O\n|     |\n|     |\n|\n|\n|";
        std::cout << "+--------\n";
        break;
    case '5':
        std::cout << "+-----+\n|     |\n|     O\n|     |\n|     |\n|\n|\n|";
        std::cout << "+--------\n";
        break;
    case '6':
        std::cout << "+-----+\n|     |\n|     O\n|     |/\n|     |\n|\n|\n|";
        std::cout << "+--------\n";
        break;
    case '7':
        std::cout << "+-----+\n|     |\n|     O\n|     |/\n|     /|n|\n|\n|";
        std::cout << "+--------\n";
        break;
    case '8':
        std::cout << "+-----+\n|     |\n|     O\n|     |/\n|     /|\n|\n|\n|";
        std::cout << "+--------\n";
        break;

    }
}


std::string selectWord(std::string &word) {
    std::ifstream inFile;
    std::string filename;
    int total_lines = 0;
    int randNum = rand() % total_lines;
    filename = "words_1.txt";
    std::string line;
    std::vector<std::string> lines;



    inFile.open(filename.c_str());

    if (!inFile.is_open()) {
        std::cout << "\n Could not open file ... program terminated \n";
    }
    srand(time(NULL));
   

    while (std::getline(inFile, line))
    {
        total_lines++;
        lines.push_back(line);
    }


    inFile.close();

    std::cout << (lines[randNum]);

    return 0 ;
}

//gameInput
/*
only takes lowercase input
passes to the main function
verifes input
*/


//recordResults
/*
saves results
*/

