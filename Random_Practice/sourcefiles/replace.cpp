#include <iostream>
#include <cstring>
#include <fstream>
#include <vector>

int main() {
   std::ifstream inFile;
   std::ofstream outFile;
   std::string filename;
   std::vector <std::string> vect;
   
   std::cin >> filename;
   std::cout
   
   inFile.open(filename.c_str());
   
   if (!inFile.is_open()){
       std::cout << " \nUnsuccessfully .... Program Terminated \n";
   }
   if (!outFile.is_open()){
      std::cout << " \nUnsuccessfully .... Program Terminated \n";
   }

   while(!inFile.eof()){  
        inFile;
   }

   inFile.close();

   std::cin >> filename;

   outFile.open(filename.c_str());
   
   while(!inFile.eof()){  
        for(int i = 0; i < vect.size() - 1; i ++){ 
            outFile << vect.at(i);
        }
   }
   
   
   
   
   
    
    

   return 0;
}
