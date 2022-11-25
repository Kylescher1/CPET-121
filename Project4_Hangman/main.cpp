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

    std::cout << "Welcome to hangperson!\nOnly will accept lowercase letter input.\nRandomly picking a word..." << std::endl;

    while (playAgain) {
        word = selectWord(word);//Random word selection
        int wordLength = word.length();
        std::vector<char> vectWord(word.begin(), word.end());
        std::vector<char> vectInputs;
        std::vector<char> vectDisplay;

        bool goodMove = false;

        for (int i = 0; i < wordLength; i++) {//Fill the display vector with astericks. Needs to be done in main
            vectDisplay.push_back('*');
        }


        display(turn, guess, word, vectWord, vectDisplay);

        while (!valid) {
            goodMove = false;
            int count = 0;

            gameInput(guess, 1, vectInputs);

            for (int i = 0; i < wordLength; i++) {
                if (guess == vectWord.at(i)) {
                    goodMove = true;
                }
            }

            if (!goodMove) {//Output if the letter guessed by a user is not in the word
                turn++;
                std::cout <<"\n\n" << guess << " is not in this word!";
                goodMove = false;
            }

            display(turn, guess, word, vectWord, vectDisplay);

            for (int i = 0; i < wordLength; i++) {//Counts errors and win
                if (vectDisplay.at(i) == vectWord.at(i)) {
                    count++;
                }
                if (count == wordLength) {
                    std::cout << "\n\n\nYou win!\nYour word was " << word;
                    valid = true;
                    goodMove = true;;
                    break;
                }
            }

            if (turn == 8) {//Stops the code when the game is lost
                std::cout << "\n\n\nYou loose!\nThe word was " << word;
                valid = false;
                goodMove = false;;
                break;
            }


        }

        recordResults( word, guess, valid, goodMove, vectInputs, turn);

        turn = 0;

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
