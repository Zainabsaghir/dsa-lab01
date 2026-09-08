#include<iostream>
#include<utility>
using namespace std;

int main() {
	const int size = 6;   
	int numbers[size];//declare an array of size 6

	//loo that reads 6 integers
	for (int i = 0; i < size; i++) {
		cin >> numbers[i];
	}

	//variables totrack start and end of the array
	int start = 0;
	int end = size - 1;

	//swap from both ends
	for (int i = 0; i < size; i++) {
		if (start < end) {
		swap(numbers[start], numbers[end]);
		start++;
		end--;
		}
	}

	//display reversed array
	cout << "Reversed Array: ";
	for (int i = 0; i < size; i++) {
		cout << numbers[i] << " ";
	}
}