// ********************************************************
// Title: Price Markup calculator
// Course: CPET-121
// Developer: Kyle Scher
// Date: 10/17/22
// Description: Converts Intial price to Final price with markups
// ********************************************************


#include <iostream>
#include <cmath>
#include <iomanip>


void MarkUpPrice(double *priceStart, double *itemPrice) {

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


    
    int i = 0;


    for(i = 0; i < 5; i++){
        std::cin >> priceStart[i];
    }

    MarkUpPrice(priceStart , itemPrice);


    for(i = 0; i < 5; i++){
        std::cout << "Item # " << i + 1 << " cost is $ " << std::setw(5) << std::right << std::fixed << std::setprecision(2) << priceStart[i] << " and the selling price is $ " << std::setw(5) << std::right << std::fixed << std::setprecision(2) << itemPrice[i] <<  std::endl;
    }

    std::cout << std::endl;

    return 0;
}

