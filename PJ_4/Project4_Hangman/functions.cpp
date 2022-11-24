#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdio.h>
#include <ctype.h>
#include <cctype>
#include "hangPerson.h"

void display(int input, char guess, std::string word, std::vector<char> &vectWord, std::vector<char> &vectDisplay) {

    std::cout << "\n\n\n";

    switch (input) {//Switch case based on what state the gallows are at
    case 0:
        std::cout << "+\n|\n|\n|\n|\n|\n|\n";
        std::cout << "+ - - - - - - - -\n";
        break;
    case 1:
        std::cout << "+-----+\n|\n|\n|\n|\n|\n|\n";
        std::cout << "+ - - - - - - - -\n";
        break;
    case 2:
        std::cout << "+-----+\n|     |\n|\n|\n|\n|\n|\n";
        std::cout << "+ - - - - - - - -\n";
        break;
    case 3:
        std::cout << "+-----+\n|     |\n|     O\n|\n|\n|\n|\n";
        std::cout << "+ - - - - - - - -\n";
        break;
    case 4:
        std::cout << "+-----+\n|     |\n|     O\n|     |\n|     |\n|\n|\n";
        std::cout << "+ - - - - - - - -\n";
        break;
    case 5:
        std::cout << "+-----+\n|     |\n|     O\n|    \\|\n|     |\n|\n|\n";
        std::cout << "+ - - - - - - - -\n";
        break;
    case 6:
        std::cout << "+-----+\n|     |\n|     O\n|    \\|/\n|     |\n|\n|\n";
        std::cout << "+ - - - - - - - -\n";
        break;
    case 7:
        std::cout << "+-----+\n|     |\n|     O\n|    \\|/\n|     |\n|    / \n|\n";
        std::cout << "+ - - - - - - - -\n";
        break;
    case 8:
        std::cout << "+-----+\n|     |\n|     O\n|    \\|/\n|     |\n|    / \\\n|\n";
        std::cout << "+ - - - - - - - -\n";
        break;

    }

    std::cout << "\n\n";
    
    int wordLength;
    wordLength = word.length();


    for (int i = 0; i < wordLength; i++) {
        if (vectWord.at(i) == guess) {
            vectDisplay.at(i) = guess;
        }
    }

    

    for (int i = 0; i < wordLength; i++) {//todo char insert
        std::cout << vectDisplay.at(i) << " ";
    }
    std::cout << std::endl;
    for (int i = 0; i < wordLength; i++) {
        std::cout << "_ ";

    }

}



std::string selectWord(std::string word) {
    std::ifstream inFile;
    std::string filename;
    int total_lines = 0;
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

    int randNum = rand() % total_lines;
    word = (lines[randNum]);

    return word ;
}

//gameInput
/*
only takes lowercase input
passes to the main function
verifes input
*/
char gameInput(char &guess, int instruction, std::vector <char>& vectInputs) {
    bool valid = false;
    std::cout << "\n\nPlease enter your guess :";

    if (instruction == 1) {//todo remove 
        while (!valid) {
            start:
            std::cin >> guess;
            for (int i = 0; i < vectInputs.size(); i++) {
                if (vectInputs.at(i) == guess) {
                    std::cout << "You have already guessed this letter!\nPlease try again :";
                    goto start;
                }
            }
            if (isalpha(guess) && islower(guess)) {//checks for lowecase letter
                vectInputs.push_back(guess);
                valid = true;
            }
            else {
                std::cout << "This is a letter!\nPlease try again :";
                continue;
            }
        }
    }
    return guess;

}


//recordResults
/*
saves results
*/

