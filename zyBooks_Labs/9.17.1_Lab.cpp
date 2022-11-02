#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

int main() {
   int size = 0;
   int value = 0;
   vector <int> vect;
   
   std::cin >> size;
   
   for(int i = 0; i <= size; i ++){
      std::cin >> value;
      vect.push_back(value);
    }

    for(int i = 0; i < size; i++){
        if(vect.at(i) < vect.back()){
            std::cout << vect.at(i) << ",";
        }
        else{
            continue;
        }
    }
    std::cout << std::endl;

    return 0;
}
