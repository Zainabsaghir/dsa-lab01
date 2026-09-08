#include<iostream>
using namespace std;

int main() {
	int numbers[5];// declare an array of size 5
	int total = 0;//sum that must start at 0

	//loop to read 5 integers into the array
	for (int i = 0; i < 5; i++) {
		cin >> numbers[i];
	}

	//loop to add each element to total printing the trace as we go
	for (int i = 0; i < 5; i++) {
		cout << "i: " << i << " numbers[i]: " << numbers[i] << endl;
		total += numbers[i];
	}

	//display total
	cout << "Total: " << total << endl;
}
