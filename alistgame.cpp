#include<iostream>
#include<cmath>
using namespace std;

int main() {
	long long number;
	cin >> number;
	int count = 0;
	while (number > 1) {
		int i = 2;
		for (; i < (sqrt(number) + 2); i++) {
			if (number%i == 0) {
				number = number/i;
				count += 1;
				break;
			}
		}

		if (i > sqrt(number)) {
			count += 1;
			break;
		}
	}

	cout << count;
}