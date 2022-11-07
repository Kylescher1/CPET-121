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
    int numElements;

    const int SIZE = 8;
    std::vector<float> my_data(SIZE);
    float sum = 0;

    std::cout << "Enter the file name to open :";
    std::cin >> fileName;

    inFile.open(fileName.c_str());

    if (!inFile.is_open()){
        std::cout << " \nUnsuccessfully .... Program Terminated \n";
    }

    std::cout << std::endl;

    for (int i = 0; i < SIZE; i++){
        inFile >> my_data.at(i);
        if(my_data.at(i) > max){
            max = my_data.at(i);
        }
        if(my_data.at(i) < min){
            min = my_data.at(i);
        }
        sum = sum + my_data.at(i);
    }
    avg = (sum/SIZE);
    std::cout << std::endl;

    std::cout << "The average is : ";
    std::cout << std::fixed << std::setprecision(2) << avg << std::endl;
    std::cout << "The Maximum Value is :" << max;
    std::cout << "\nThe Minimum Value is :" << min;
    std::cout << "\nThe average is :" << avg;
    std::cout << "\nThe sum is :" << sum;

    std::cout << "\nSaving output to output.txt...";
    fileName = "output.txt";

    outFile.open(fileName.c_str());
    outFile <<"The maximum is :" << max << std::endl;
    outFile <<"The minimum is :" << min << std::endl;
    outFile <<"The sum is :" << sum << std::endl;
    outFile <<"The average is :" << avg << std::endl;

    inFile.close();
    outFile.close();

    return (0);
}