#include <iostream>

bool isPrime(int a) {
	for (int i = 3; i*i <= a; ++i) if (a % i == 0) return false;
	return true;
}

int main()
{
	unsigned long sum = 2;
	int n = 0;
	std::cin >> n;
	for (int i = 3; i < n; ++i) {
		if (i % 2 == 0) continue;
		if (isPrime(i)) sum += i;
	}
	std::cout << sum << std::endl;
	return 0;
}