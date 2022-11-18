#include "multiplefiles.h"
#include <cmath>
#include <iostream>

float CalEquivDuct(double width, double height) {

	float dE = 0;


	width = pow(width, 2);
	height = pow(height, 3);

	dE = (PARAMETER_RATIO * pow((width * height), PARAMETER_POWER)) / pow((width + height), PARAMETER_POWER2);

	return dE;

}

