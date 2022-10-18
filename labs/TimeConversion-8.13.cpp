// ********************************************************
// Title: Time Conversions 
// Course: CPET-121
// Developer: Kyle Scher
// Date: 10/17/22
// Description: Converts Time values of Seconds, Minutes and Hours
//
// ********************************************************

#include <iostream>
#include <cmath>

void equivalentTime(int startSeconds,int *seconds, int *minutes,int *hours);

int main() {
    int startSeconds = 0;
    int seconds = 0, minutes = 0, hours = 0;

    std::cin >> startSeconds;

    equivalentTime(startSeconds, &seconds, &minutes, &hours);

    std::cout << "Starting seconds of " << startSeconds << " is equivalent to " << hours <<" hour(s) and "  << minutes << " minute(s) and " << seconds << " second(s)." << std::endl;

    return 0;
    
}


void equivalentTime (int startSeconds, int *seconds, int *minutes, int *hours){

    *minutes = startSeconds / 60;
    *seconds = startSeconds % 60;
    *hours = *minutes / 60;
    *minutes = *minutes % 60;

}


