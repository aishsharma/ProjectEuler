/*
Solution via Loops.
A longer solution in terms of computation time compared to Arithemetic Progression.

Loop through all numbers between 1 and 999 and check if they are divisible by 3 or 5 or both.
Add them if they are.
*/

#include <iostream>
using namespace std;

double sumAP(float, float, float);

int main() {

	int sum = 0;

	for (int i = 1; i < 1000; i++) {
		if ((i % 3 == 0) && (i % 5 == 0)) {
			sum += i;
		}
		else if ((i % 3 == 0) || (i % 5 == 0)) {
			sum += i;
		}
	}

	cout << "Sum of all multiples of 3 and 5 below 1000 = " << sum << endl;

	cout << "Press any key to exit.";
	cin.get();

	return 0;
}