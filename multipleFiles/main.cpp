#include <iostream>
#include "multiplefiles.h"

int main()
{
	float width = 0;
	float height = 0;
	float dE;

	std::cout << "Please enter Width: ";
	std::cin >> width;

	std::cout << "Please enter Height: ";
	std::cin >> height;

	dE = CalEquivDuct(width, height);

	std::cout << "\nDuct is equal to:" << dE << std::endl;

	return 0;
}