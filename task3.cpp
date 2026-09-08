#include<iostream>
using namespace std;

//Student class: groups roll number and marks together with a member function to display them
class Student {
public:
	int rollNumber;
	int marks;

	void display() {
		cout << "Rollnumber: " << rollNumber << endl;
		cout << "Marks: " << marks << endl;
	}
};

int main() {
	Student s1;
	Student s2;

	//assign values using dot operator
	s1.rollNumber = 1;
	s1.marks = 75;
	s2.rollNumber = 2;
	s2.marks = 90;

	//initial display of both objects
	cout << "-----Student 1-----\n";
	s1.display();
	cout << "-----Student 2-----\n";
	s2.display();

	//change only s1's marks
	s1.marks = 80;

	//display both objects again to show s2 is unaffected
	cout << "-----Student 1-----\n";
	s1.display();
	cout << "-----Student 2-----\n";
	s2.display();
}
