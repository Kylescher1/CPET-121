/*

9.23 L9_pp3 (jts)
Modify the code from 9.22 L9_pp2
Display the Original vector on one line.
Display the size of the current vector.
Add two new elements to the end of the vector.
Display the Revised vector on one line.
Display the size of the new vector.
Submit your code No signoff needed for grade of 5 /5

*/


#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
   
   vector <int> vect(5);
   int value = 0;
   
   for(int i = 0; i < 5; i++){
      std::cin >> vect.at(i);
   }
   
   std::cout << std::endl << "Original vector"<< std::endl;
   for(int i = 0; i < 5; i++){
    cout <<vect.at(i) << "  ";
   }
   std::cout<<std::endl;

   std::cout << "The size of the Original vector is : " << vect.size() << std::endl;

   for(int i = 5; i < 7; i++){
    std::cin >> value;
    vect.push_back(value);
   }

   std::cout << std::endl;
   
   std::cout << "Revised vector" << std::endl;
   for(int i = 0; i < 7; i++){
      cout <<vect.at(i) << "  ";
   }
   std::cout << endl;

   std::cout << "The size of the Revised vector is : "  << vect.size() << std::endl;

   return 0;
}
   