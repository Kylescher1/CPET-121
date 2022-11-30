#include <iostream>
#include <iomanip>
#include <algorithm>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>

std::vector<int> ranfill(std::vector<int> & vect){

    for(int i = 0; i <= 10000; i++){
        vect.push_back(rand() % 10000 + 1);
    }
    std::sort(vect.begin(), vect.end());
    return vect;
}

void binarySearch(int target, std::vector<int> & vect){
    bool found;
    int start = 0, mid = 0, last = 0;

    last = vect.size() - 1;

    while(start <= last && !found){
        mid = (start + last) / 2;

        if(vect.at(mid) == target){
            std::cout << "I found your number at index :" << mid + 1;
            found = true;
        }
        else if(vect.at(mid) > target){
            last = mid - 1;
        }
        else if(vect.at(mid) < target){
            start = mid + 1;
        }
        else{
            std::cout << "I could not find your value!";
            found = true;
        }
    }
}


int main (){
    int target = 0;
    int result;
    bool found = false;
    std::vector <int> vect;
    std::string quit;
    //Press R to randomize dataset
    //Enter a number to see how many times it appears and where, also some stats like percentage  

    while(quit != "N"){
        std::cout << "Randomizing a list of 10,000 integers";
        ranfill(vect);
        
        std::cout << "\nPlease enter the value you are searching for : ";
        std::cin >> target;
        binarySearch(target, vect);

        std::cout << "\nRandomize again? [Y/N] :";
        std::cin >> quit;
    }

    return 0;
}