#include <iostream>
using namespace std;

int main() {
	int a, b;
	cout << "Enter first number: ";
	cin>> a;
	cout << "Enter second number: ";
	cin >> b;

	if (a > b) {
	   int temp = a;
	   a = b;
	   b = temp;

	}

	int sum = 0;
	for (int i = a; i <= b; i++) {
	    if (i % 2 == 0) {
		sum += i;
	    }
	}

	cout << "Sum of even numbers: " << sum << endl;
	return 0;
   }
