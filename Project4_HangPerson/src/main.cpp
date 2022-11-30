#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <string>
#include <cstring>
#include "hangPerson.h"

int main() {

    std::string word = "ZZZZZZZZ";//max word length is set
    bool valid = false;//used in loop
    bool playAgain = true;//used in loop
    std::string play;//user input for game loop
    char guess = ' ';//users guess
    int turn = 0;//state of the gallows


    std::cout << "Welcome to hangperson!\nOnly will accept lowercase letter input.\nRandomly picking a word..." << std::endl;

    while (playAgain) {
        word = selectWord(word);//Random word selection
        int wordLength = word.length();//word lenght variable, very useful for various tasks
        std::vector<char> vectWord(word.begin(), word.end());//holds the word in a vector. Useful for comparisons 
        std::vector<char> vectInputs;//collects every user input
        std::vector<char> vectDisplay;//holds the diplay output. Changes as game moves along

        bool goodMove = false;

        for (int i = 0; i < wordLength; i++) {//Fill the display vector with astericks. Needs to be done in main
            vectDisplay.push_back('*');
        }

        display(turn, guess, word, vectWord, vectDisplay);//display the initial gallows

        while (!valid) {// main logic loop
            goodMove = false;
            int count = 0;

            gameInput(guess, 1, vectInputs);//get user input

            for (int i = 0; i < wordLength; i++) {//was the letter found?
                if (guess == vectWord.at(i)) {
                    goodMove = true;
                }
            }

            system("CLS");

            if (!goodMove) {//Output if the letter guessed by a user is not in the word
                turn++;
                std::cout << guess << " is not in this word!";
                goodMove = false;
            }

            display(turn, guess, word, vectWord, vectDisplay);// Displays the gallows

            for (int i = 0; i < wordLength; i++) {//Counts errors and win
                if (vectDisplay.at(i) == vectWord.at(i)) {//if vector display = vector word then game is over
                    count++;
                }
                if (count == wordLength) {//win case
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

        recordResults(word, guess, valid, goodMove, vectInputs, turn);//results function collects everything

        turn = 0;//reset gallows

        //Game loops 
        std::cout << "\n\n\nWould you like to play again? [Y/N] :";
        std::cin >> play;

        if (play == "Y" || play == "y") {
            playAgain = true;
            valid = false;
            system("CLS");
            std::cout << "Clearing the gallows and choosing new word...";
            std::cin.clear();
        }
        else {
            playAgain = false;
            std::cout << "Sorry to see you go, quitting program...";
        }
    }
}
