#include<iostream>
#include<climits>
using namespace std;

int main() {
	const int size = 8;   
	int numbers[size];//declare an array of size 8

	//read 8 integers
	for (int i = 0; i < size; i++) {
		cin >> numbers[i];
	}

	int smallest = INT_MAX;
	int smallest_index = 0;
	int largest = INT_MIN;
	int largest_index = 0;

	//comparing for the smallest and largest values
	//strict < and > ensure first occurrence wins on ties
	for (int i = 0; i < size; i++) {
		if (numbers[i] < smallest) {
			smallest = numbers[i];
			smallest_index = i;
		}
		if (numbers[i] > largest) {
			largest = numbers[i];
			largest_index = i;
		}
	}

	//display results
	cout << "Largest number is " << largest << " at index no. " << largest_index << endl;
	cout << "Smallest number is " << smallest << " at index no. " << smallest_index << endl;
}