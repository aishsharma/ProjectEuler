#include <iostream>
#include<math.h>
using namespace std;

double getLPF(double);
bool isPrime(double);

int main() {

	double num = 600851475143;

	double lpf = getLPF(num);

	if (lpf != -1) {
		cout << "The largest prime factor of " << num << " is: " << lpf;
	}
	else {
		cout << "This number has no prime factors.";
	}

	cout << "\nPress any key to exit.";
	cin.get();
}

double getLPF(double num) {
	double lpf = -1;

	double root = floor(sqrt(num));

	for (double i = root; i > 1; i--) {
		if ((fmod(num, i) == 0)) {
			if (isPrime(i)) {
				lpf = i;
				break;
			}
		}
	}

	return lpf;
}

bool isPrime(double n) {
	bool flag = true;

	double limit = floor(sqrt(n));

	for (double i = 2; i <= limit; i++) {
		if (fmod(n, i) == 0) {
			flag = false;
			break;
		}
	}

	return flag;
}
