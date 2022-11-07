#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>

int main (){

    std::ifstream inFile;
    std::ofstream outFile;
    std::string fileName;
    int max = 0, min = 0;
    int avg;

    fileName = "marylamb#1";
    inFile.open(fileName.c_str());

    if (!inFile.is_open()){
        std::cout << " \nUnsuccessfully .... Program Terminated \n";
    }

    std::cout << std::endl;




    inFile.close();
    outFile.close();

    return (0);
}