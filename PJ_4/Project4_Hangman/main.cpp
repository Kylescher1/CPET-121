#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <string>
#include <cstring>
#include "hangPerson.h"

int main() {

    std::string word = "ZZZZZZZZ";
    bool valid = false;
    bool playAgain = true;
    std::string play;
    char guess = ' ';
    int turn = 0;

    std::cout << "Welcome to hangperson!\nRandomly picking a word..." << std::endl;

    while (playAgain) {
        word = selectWord(word);//Random word selection
        int wordLength = word.length();
        std::vector<char> vectWord(word.begin(), word.end());
        std::vector<char> vectInputs;

        std::vector<char> vectDisplay;
        for (int i = 0; i < wordLength; i++) {//Fill the display vector with astericks. Needs to be done in main
            vectDisplay.push_back('*');
        }

        display(turn, guess, word, vectWord, vectDisplay);

        while (!valid) {
            int count = 0;
            int goodMove = false;

            gameInput(guess, 1, vectInputs);
            for (int i = 0; i < wordLength; i++) {
                if (guess == vectWord.at(i)) {
                    goodMove = true;
                }
            }
            if (!goodMove) {
                turn++;
                std::cout <<"\n\n" << guess << " is not in this word!";
            }
            display(turn, guess, word, vectWord, vectDisplay);
            for (int i = 0; i < wordLength; i++) {
                if (vectDisplay.at(i) == vectWord.at(i)) {
                    count++;
                }
                if (count == wordLength) {
                    std::cout << "\n\n\nYou win!\nYour word was " << word;
                    valid = true;
                    break;
                }
            }
            if (turn == 8) {
                std::cout << "\n\n\nYou loose!\nThe word was " << word;
                valid = true;
                break;
            }
        }
        turn = 0;
        //Record Results 

        std::cout << "\n\n\nWould you like to play again? [Y/N] :";
        std::cin >> play;
        if (play == "Y" || play == "y") {
            playAgain = true;
            valid = false;
            std::cout << "Clearing the gallows...\nChoosing new word...";
        }
        else {
            playAgain = false;
            std::cout << "Sorry to see you go, quitting program...";
        }
    }
}