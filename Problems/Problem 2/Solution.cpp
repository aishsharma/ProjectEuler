/*
Loop based solution to this problem
*/

#include<iostream>
using namespace std;

bool isEven(int);

int main() {

	const int limit = 4000000;

	//Sum of even numbers in sequence. Initially 2 as that is our 2nd number.
	long int sum = 2;

	//Initial sequence
	int first = 1;
	int second = 2;
	int third = first + second;

	while (third < limit) {
		first = second;
		second = third;
		third = first + second;

		if (isEven(third)) {
			sum += third;
		}
	}

	cout << "Sum of even fibonacci numbers between 1 and 4 million = " << sum;

	cout << "\nPress any key to exit.";

	cin.get();
	return 0;
}

bool isEven(int num) {
	if (num % 2 == 0) {
		return true;
	}
	else {
		return false;
	}
}