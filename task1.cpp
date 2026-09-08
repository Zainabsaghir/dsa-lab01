#include<iostream>
using namespace std;
int main() {
	
	const int size = 5;
	int numbers[size] = { 2,4,6,8,10 };//declare and initilize array of size 5

	numbers[2] = 7;//change the third element to 7
	
	//loop to display the array after applying the desired change
	for (int i = 0; i < size; i++) {
		cout << numbers[i] << " ";
	}
}