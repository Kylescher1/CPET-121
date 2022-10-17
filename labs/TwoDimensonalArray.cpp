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

int equivalentTime(int startSeconds,int seconds, int minutes,int hours)

int main() {
    int startSeconds, seconds, minutes, hours;

    std::cin >> startSeconds;

    equivalentTime(startSeconds, &seconds, &minutes, &hours);

    std::cout << "Starting seconds of" << startSeconds << " is equivalent to " << hours <<" and "  << minutes << " and " << seconds << std::endl;

}


int equivalentTime (int startSeconds, int seconds, int minutes, int hours){

    hours = startSeconds % 60;

}


