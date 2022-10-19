#include <iostream>
#include <cmath>
#include <iomanip>

int main(){
    int a[4][3];
    int i,j;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            std::cin >> a[i][j];
        }
    }

    for(i = 3; i >= 0; i--){
        for(j = 2; j >= 0; j--){
            std::cout << a[i][j] << " ";
        }

        std::cout << std::endl;
    }

}