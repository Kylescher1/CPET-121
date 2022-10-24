//*************************************************************
//  Title: L1pp1.cpp
//  Course:         
//  Developer:                                
//  Date:                                                                          
//  Description: Create a 5 element vector from user 
//               input integers
//                           
//*************************************************************
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
   
   vector <int> vect(5);
   
   for(int i = 0; i < 5; i++){
      std::cin >> vect.at(i);
   }
   
   for(int i = 0; i < 5; i++){
    cout <<vect.at(i) << std::endl;
   }
   return 0;
}
   