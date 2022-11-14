#include "multiplefiles.h"
#include <cmath>
#include <iostream>

void equivDuct(double arg1 , double arg2) {

	std::cout << "Please enter number 1: ";
	std::cin >> arg1;

	std::cout << "Please enter number 1: ";
	std::cin >> arg2;


	arg1 = pow(arg1, 2);
	arg2 = pow(arg2, 3);

	std::cout << arg1 << " " << arg2;

}