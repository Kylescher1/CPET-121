#include <iostream>
#include <iomanip>

int main (){

    int count = 0;
    double U[8];
    int i;
    double sum;
    double avg;

    for(i = 0; i < 8; i++){
        std::cin >> U[i];
        if(U[i] != -1){
            count = count + 1;
            continue;
        }
        else {
            break;
        }
    }

    for(i = 0; i < 8; i ++){
        if(U[i] != -1){
            std::cout << "Element" << "[" << i + 1 << "] = " << U[i] << std::endl;
        }
        else {
            break;
        }
    }

    for(i = 0; i < count; i++ ){
        if(U[i] != -1){
            sum = sum + U[i];
        }
    }

    std::cout << std::endl;

    avg = sum / count;
    std::cout << "Average = " << std::fixed << std::setprecision(2) << avg << std::endl;

    return 0;

}