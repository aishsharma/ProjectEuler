#include<iostream>

using namespace std;

bool isPalindrome(int);

int main() {
    int i, j, l, r;
    int max = 0;

    cout<<"Starting core.\n";

    //Assuming that palindrome is a product of numbers between 800 and 999. Just to shorten processing time.
    for (i = 999; i > 800; i--) {
        for (j = i; j > 800; j--) {
            int num = i * j;
            cout<<"i = "<<i<<" * "<<j<<" = "<<num<<endl;
            if (isPalindrome(num) && num > max) {
                max = num;
                l = i;
                r = j;
            }
        }
    }

    cout<<"The larges palindrome is:\n"<<l<<" x "<<r<<" = "<<max;
}

bool isPalindrome(int num) {
    int rev = -1;

    cout<<"Entered isPalindrome().\n";

    //Reversing number
    for (int i = num; i >0; i/=10) {
        if (rev == -1) {
            rev = i % 10;
        } else {
            rev = rev * 10 + (i%10);
        }
    }

    cout<<"Finished check.\n";

    if (rev == num) {
        return true;
    } else {
        return false;
    }
}
