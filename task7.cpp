#include<iostream>
using namespace std;

int main() {
	const int size = 10;
	int numbers[size];//declaring an array of size 10

	//loop reads 10 integers
	for (int i = 0; i < size; i++) {
		cin >> numbers[i];
	}

	int unique_cnt = 0;//number of distinct values found so far (also next write position)

	for (int i = 0; i < size; i++) {
		int current = numbers[i];
		bool seen = false;

		//checks if 'current' already exists among the unique values found so far
		for (int j = 0; j < unique_cnt; j++) {
			if (numbers[j] == current) {
				seen = true;
				break;
			}
		}

		//if it's a new value, place it at the next unique slot
		if (!seen) {
			numbers[unique_cnt] = current;
			unique_cnt++;
		}
	}

	//display the unique values which is the first unique_cnt slots, and the unique_cnt
	for (int i = 0; i < unique_cnt; i++) {
		cout << numbers[i] << " ";
	}
	cout << "with a count of " << unique_cnt;
}