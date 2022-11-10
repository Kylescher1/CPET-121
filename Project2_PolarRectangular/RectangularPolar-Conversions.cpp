//**************************************************************
//*** Title: Polar/Rectangular
//*** Course: CPET-121
//*** Developer: Kyle Scher
//*** Date: 10/10/22
//*** Description: Convert Polar/Rectangular Coordinates 
//*** This project is complete!

//**************************************************************
#include <iostream>
#include <string>
#include <math.h>
#include <cmath>
#include <iomanip>




//recToPolar(double x, double y, pointer r and pointer theta) PROTOTYPE
void recToPolar(double x, double y, double* r, double* theta);


//polarToRec(double m, double theta, pointer x1 and y1) PROTOTYPE
void polarToRec(double r, double theta, double* x1, double* y1);


//userInput (userInt, all pointers) PROTOTYPE

void userInput(std::string* type1, double* x1, double* y1, double* r1, double* theta1);


int main() {

    double x = 0, y = 0;
    double r = 0, theta = 0;
    std::string userInt;
  

    /*
    * This is the main do while loop in the Main Function
    * First calls user input function to collect all values based on user input
    * Based on user Instruction, a certain function is called
    * Accounts for bad user input
    */


    do{
        
        userInput(&userInt, &x, &y, &r, &theta);



        if (userInt == "R" || userInt == "r") {
            
            recToPolar(x, y, &r, &theta); // R and Theta are passed by refrence, so recToPolar func modifys their values in main
           
            std::cout << "REC->POL+++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl << "REC: X = " << std::fixed << std::setprecision(2) << x << " Y = " << std::fixed << std::setprecision(2) << y << "    POL : " << "M = " << std::fixed << std::setprecision(2) << r << "  A = " << std::fixed << std::setprecision(2) << theta << std::endl;
        }
        else if (userInt == "P" || userInt == "p") {
            polarToRec(r, theta, &x, &y); // X and Y are passed by refrence, so recToPolar func modifys their values in main

            std::cout << "POL->REC+++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl << "POL: M = " << std::fixed << std::setprecision(2) << r << " A = " << std::fixed << std::setprecision(2) << theta << "    REC : " << "X = " << std::fixed << std::setprecision(2)  << x << "  Y = " << y << std::endl;
        }
        else if (userInt != "P" && userInt != "p" && userInt != "R" && userInt != "r" && userInt != "Q" && userInt != "q") { // Quits if the User Instruction is Q
            std::cout << "Format Error! ----------------------------------------------" << std::endl;
        }
        if (userInt == "Q" || userInt == "q") {
            break;
        }
        

        

    } while (true);

    return(0);
}


//Rectangular to Polar function
void recToPolar(double x, double y, double *r, double *theta) {

    const double radToDegrees = 180 / 3.141592653589; //Const Pi

    *r = sqrt((pow(x, 2) + pow(y, 2)));
    *theta = atan((y / x)) * radToDegrees;
    if (x < 0) {
        *theta -= 180;
    }
}

//Polar to Rectangular Function
void polarToRec(double r, double theta, double *x1, double *y1) {

    const double radToDegrees = 180 / 3.141592653589;

    *x1 = (r * cos(theta/radToDegrees));

    *y1 = (r * sin(theta/radToDegrees));

}

void userInput(std::string *type1, double *x1, double *y1, double *r1, double *theta1) { //User Input function

    std::string type;
    double x = 0;
    double y = 0;
    double r = 0;
    double theta = 0;
 
 
    std::cin >> type;

    *type1 = type;

    if (type == "R" || type == "r") {
        std::cin >> x >> y;
    }

    else if (type == "P" || type == "p") {
        std::cin >> r >> theta;
    }
    else if (type == "Q" || type == "q") {
        return; // If Q returns to main function
    }
    else {
        std::cin >> x >> y;
    }

    *x1 = x;
    *y1 = y;
    *r1 = r;
    *theta1 = theta;


}



