#include <iostream>
#include <vector>

class Frac {
public:
	int num;
	int denom;
	int digits;
	std::vector<int> nvec;
	std::vector<int> dvec;

	Frac(int n, int d, int dig) 
	: num{n}, denom{d}, digits{dig},
	  nvec{std::vector<int> (dig,0)},
	  dvec{std::vector<int> (dig,0)} {
		for (int i = 1; i <= digits; ++i) {
			nvec[digits - i] = n % 10;
			n = n / 10;
			dvec[digits - i] = d % 10;
			d = d / 10;
		}
	}







	void printVec() {
		for (int i = 0; i < digits; ++i){
		std::cout << nvec.at(i) << "/" << dvec.at(i) << ",";
		}
		std::cout << std::endl;
	}
};


int main() {
	Frac f{1234567890,987654321,10};
	f.printVec();

	return 0;
}