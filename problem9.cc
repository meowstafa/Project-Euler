#include <iostream>

int main() {
	int n = 0;
	std::cin >> n;

	int c = n - 2;
	int b = (n - c) / 2;
	int tot = 0;

	while (true) {
		while(n-c-b > 0) {
			if ((n-c-b)*(n-c-b)+ b*b == c*c) {
				int temp = (n-c-b)*b*c;
				std::cout << "a: " << (n-c-b) << ", b: " << b << ", c: " << c << std::endl;
				std::cout << temp << std::endl;
				++tot;

			}
			++b;
		}
		b = (n - (--c)) / 2;
		if (c == 0) {
			std::cout << "Total triples: " << tot << std::endl;
			return 0;
		}
	}
}