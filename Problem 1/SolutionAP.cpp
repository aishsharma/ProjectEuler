/*
Solution based on arithmetic progression:

3, 6, 9....999	= 3k where k=[1,2,3....333]			--Multiples of 3
5, 10, 15....995	= 5k where k = [1,2,3...199]	--Multiples of 5
15, 30, 45...990	= 15k where k= [1,2,3...66]		--Multiples of 15

Solution:
S3 + S5 - S15

333(3+999)/2 + 199(5 + 995)/2 - 66(15 + 990)/2
*/

#include <iostream>
using namespace std;

double sumAP(float, float, float);

int main() {

	//Sum of AP for multiples of 3, 5 and 15
	double s3, s5, s15;

	//Getting Sums
	s3 = sumAP(3, 999, 333);
	s5 = sumAP(5, 995, 199);
	s15 = sumAP(15, 990, 66);

	cout << "Sum of multiples of 3 = " << s3 << endl;
	cout << "Sum of multiples of 5 = " << s5 << endl;
	cout << "Sum of multiples of 15 = " << s15 << endl;
	cout << "Sum of all multiples of 3 and 5 below 1000 = " << (s3 + s5 - s15) << endl;

	cout << "Press any key to exit.";
	cin.get();

	return 0;
}

/*
	This function returns the sum of an arithemetic progression.
	Parameters:
	a = First number of series.
	l = Last number of series.
	n = Number of elements in series.
	*/
double sumAP(float a, float l, float n) {
	double sum = (n / 2) * (a + l);
	return sum;
}