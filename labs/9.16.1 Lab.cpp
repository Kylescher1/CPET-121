/*
Given a sorted list of integers, output the middle integer. A negative number indicates the end of the input (the negative number is not a part of the sorted list). Assume the number of integers is always odd.

Ex: If the input is:

2 3 4 8 11 -1 
the output is:

Middle item: 4
The maximum number of list values for any test case should not exceed 9. If exceeded, output "Too many numbers".

Hint: First read the data into a vector. Then, based on the number of items, find the middle item. 
*/


#include <iostream>
#include <vector>   // Must include vector library to use vectors
using namespace std;

int main() {

   int value;
   int NUM_ITEMS = 0;

   vector<int> vect;

   do {
      if()
      NUM_ITEMS = NUM_ITEMS + 1;
      std::cin >> value;
      if(NUM_ITEMS < 9 && value > 0){
         vect.push_back(value);
      }
      else if(NUM_ITEMS > 9){
         break;
      }
      else{
         break;
      }

   }while(value > 0);


   if(NUM_ITEMS < 9){
      std::cout <<"Middle item: " << vect.at((NUM_ITEMS / 2) - 1) << std::endl;
   }
   else{
      std::cout << "Too many numbers" << std::endl;
   }
   return 0;
}
