#include <iostream>
#include <cmath>
#include <iomanip>


void MarkUpPrice(double * priceStart, double *itemPrice) {

    for(int i = 0; i < 5; ++i) {
        if(priceStart[i] <= 1){
            itemPrice[i] = (priceStart[i] * 0.063) + priceStart[i];
        }

        else if(priceStart[i] > 1 && priceStart[i] < 5){
            itemPrice[i] =( priceStart[i] * 0.055) + priceStart[i];
        }

        else if(priceStart[i] >= 5){
            itemPrice[i] = (priceStart[i] * 0.05) + priceStart[i];
        }
    }

}


int main(){

    double priceStart[5];

    double itemPrice[5];

    double *p, *s;
    p = itemPrice;
    s = priceStart;
    
    int i = 0;


    for(i = 0; i < 5; i++){
        std::cin >> priceStart[i];
    }

    MarkUpPrice(s , p);


    for(i = 0; i < 5; i++){
        std::cout << "Item # " << i + 1 << " cost is $ " << std::setw(5) << std::right << std::fixed << std::setprecision(2) << priceStart[i] << " and the selling price is $ " << std::setw(5) << std::right << std::fixed << std::setprecision(2) << itemPrice[i] <<  std::endl;
    }

    std::cout << std::endl;

    return 0;
}

