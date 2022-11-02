#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

int main() {
   int size = 0;
   int value = 0;
   int secS, min;
   std::vector <int> vect;
   
   std::cin >> size;
   
   for(int i = 0; i < size; i ++){
      std::cin >> value;
      vect.push_back(value);
    }

    for(int i = 0; i < size; i++){
        if(vect.at(i) < min){
            min = vect.at(i);
        }
    }

    for(int i = 0; i < size; i++){
        if(vect.at(i) < secS && vect.at(i) > min){
            secS = vect.at(i);
        }
    }

    std::cout << min << " and " << secS << std::endl;


    return 0;
}
