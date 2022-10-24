// ********************************************************
// Title: L8_pp4.cpp
// Course: 
// Developer: 
// Date:
// Description:  Fill a 2D array with random integers 0 to
//               99. Calculate the sum of each row.
//
// ********************************************************

#include <iostream>
#include <iomanip>
#include <cmath>

int main(){

    int rNum[5][5];

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            rNum[i][j] = rand() % 100;
        }
    }
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            std::cout << "  " << std::setw(3) << std::left << rNum[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;

    std::cout << "Sum of ROW [0]  is:    " << rNum[0][1] +rNum[0][2] + rNum[0][3] + rNum[0][4] + rNum[0][5] << std::endl;
    std::cout << "Sum of ROW [1]  is:    " << rNum[1][1] +rNum[1][2] + rNum[1][3] + rNum[1][4] + rNum[1][5] << std::endl;
    std::cout << "Sum of ROW [2]  is:    " << rNum[2][1] +rNum[2][2] + rNum[2][3] + rNum[2][4] + rNum[2][5] << std::endl;
    std::cout << "Sum of ROW [3]  is:    " << rNum[3][1] +rNum[3][2] + rNum[3][3] + rNum[3][4] + rNum[3][5] << std::endl;
    std::cout << "Sum of ROW [4]  is:    " << rNum[4][1] +rNum[4][2] + rNum[4][3] + rNum[4][4] + rNum[4][5] << std::endl;
        
}