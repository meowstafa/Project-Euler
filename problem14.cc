#include <iostream>


unsigned long collatz(unsigned long n) {
	if (n % 2 == 0) return n / 2;
	else return 3*n + 1;
}

int collatzLength (unsigned long n) {
	int len = 1;
	while (n != 1) {
		++len;
		n = collatz(n);
	}
	return len;
}

int main() {
	unsigned long n;
	unsigned long temp = 0;
	std::cin >> n;
	unsigned long max = 0;
	unsigned long maxNum = 0;
	for (int i = 1; i < n; ++i) {
		temp = collatzLength(i);
		if (temp > max) {
			max = temp;
			maxNum = i;
		}
	}
	std::cout << "Number: " << maxNum << ", Length: " << max << std::endl;
	return 0;
}
