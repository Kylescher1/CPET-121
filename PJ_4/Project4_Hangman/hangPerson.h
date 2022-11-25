#ifndef HANGPERSON_H_INCLUDED
#define HANGPERSON_H_INCLUDED
#include <string>

void display(int input, char guess, std::string word, std::vector<char> &vectWord, std::vector<char> &vectDisplay);
char gameInput(char& guess, int instruction, std::vector<char> &vectInputs);
std::string selectWord(std::string word);
void recordResults(std::string word, char guess, bool valid, bool goodMove, std::vector <char> vectInputs, int turn);

#endif // !TEST
