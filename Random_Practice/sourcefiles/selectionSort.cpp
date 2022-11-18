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

	selectionSort(data);

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

void selectionSort(int d[]){
	bool swapped = false;
    int curMin;
    int curV;

	for(int i = 0; i < SIZE - 1; i++){
        curV = d[i];
        for(int j = 0; j < SIZE - 1; j++ ){
            if(d[i] < d)
                if element < currentMinimum

                set element as new minimum

            swap minimum with first unsorted position
        }
    }
}

