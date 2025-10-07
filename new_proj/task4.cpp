#include <iostream>
using namespace std;

int sumOfDigits(int n) {
	int sum = 0;
	while (n > 0) {
		sum += n % 10;
		n /=10;
	}
	return sum;
}

int main() {
	int count = 0;

	for (int ticket = 0; ticket <= 999999; ticket++) {
		int firstHalf = ticket /1000;
		int secondHalf = ticket % 1000;

		if(sumOfDigits(firstHalf) == sumOfDigits(secondHalf)) {
			count++;
		}
	}

	cout << "Total lucky tickets: " << count << endl;
	return 0;
}
