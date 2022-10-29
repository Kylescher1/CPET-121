#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
   int size = 0;
   double value = 0;
   vector <double> vect;
   
   std::cin >> size;
   
   for(int i = 0; i < size; i ++){
      std::cin >> value;
      vect.push_back(value);
   }

   int max = *max_element(vect.begin(), vect.end()); //Finds max value

   for(int i = 0; i < vect.size(); i++){ //Adjust Vector
    vect.at(i) = vect.at(i) / max;
   }

   for(int i = 0; i < vect.size(); i++){
    std::cout << std::fixed << std::setprecision(2) << vect.at(i) << " ";
   }

   std::cout << std::endl;


   return 0;
}
