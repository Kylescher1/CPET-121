#include <iostream>
#include <cmath>


double * MarkUpPrice(double priceStart[5]) {
    int i = 0;
    double itemPrice[5];

    for(i = 0; i < 5; i++){
        if(priceStart[i] <= 1){
            itemPrice[i] = priceStart[i] * 0.063;

        }
        else if(priceStart[i] > 1 && priceStart[i] < 5){
            itemPrice[i] = priceStart[i] * 0.055;
        }
        else if(priceStart[i] >= 5){
            itemPrice[i] = priceStart[i] * 0.05;
        }
    }

    return itemPrice;

}


int main(){

    double priceStart[5];
    double *itemPrice[5];
    int i = 0;


    for(i = 0; i < 5; i++){
        std::cin >> priceStart[i];
    }

    *itemPrice = MarkUpPrice(priceStart);



    for(i = 0; i < 5; i++){
        std::cout << "Item # " << i + 1 << " cost is $ " << priceStart[i] << " and the selling price is $ " << *itemPrice[i] <<  std::endl;
    }

    return 0;
}

