// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Title: Sort_Class_Exercise.cpp
// Course: Computational Problem Solving CPET-121
// Developer: Dr G.H. Zion
// Data: Fall 2018
// Description: Class Exercise for Sorting
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int const SIZE = 15;

void Create_Data(int d[]);

void Print_Data(int d[]);

void bubbleSort(int d[]);

int main(void)
{
	int data[SIZE];

	srand(time(NULL));

	Create_Data(data);

	Print_Data(data);

	bubbleSort(data);

	Print_Data(data);

	return (0);
}
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


void Create_Data(int d[])
{
	for (int i = 0; i < SIZE; i++)
		d[i] = rand() % 100;
	return;
}

void Print_Data(int d[])
{
	cout << endl << setfill('0');
	for (int i = 0; i < SIZE; i++)
		cout << "[" << setw(2) << i << "] ";
	
	cout << endl << setfill(' ');
	for (int i = 0; i < SIZE; i++)
		cout << setw(3) << d[i] << "  ";
	cout << endl;
	return;
}

void bubbleSort(int d[]){
	bool swapped = false;

	for (int i = 0; i < SIZE-1; i++){
		for (int j = 0; j < SIZE-i-1; j++){
			if (d[j] > d[j+1]){
				int swap1 = d[j];
				int swap2 = d[j + 1];
				d[j] = swap2;
				d[j + 1] = swap1;

				swapped = true;
			}
		}
		if (swapped == false){
			break;
		}
	}
}

