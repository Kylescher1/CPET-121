#include <iostream>
#include <iomanip>


void numAry(int A[][5]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            A[i][j] = A[i][j] + j - i;
        }
    }
}



int main() {
    int A[3][5];


    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            A[i][j] = rand() % 49 + 1;
        }
    }
    
    std::cout << std::endl << "Original numAry" << std::endl;
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            std::cout << std::setw(4) << std::right << A[i][j];
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;

    numAry(A);
   
   std::cout << "Modified numAry" << std::endl;
   
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            std::cout << std::setw(4) << std::right << A[i][j];
        }
        std::cout << std::endl;
    }


    return 0;

}