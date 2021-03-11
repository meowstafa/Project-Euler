#include <iostream>
#include <vector>

std::vector<std::vector<int>> createPyramid() {
	int x = 0;
	int r = 1;
	std::vector<std::vector<int>> pyramid;
	while(true) {
		std::vector<int> temp;
		for (int i = 0; i < r; ++i) {
			std::cin >> x;
			temp.push_back(x);
		}

		if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore();
			break;
		}
		pyramid.push_back(temp);
		++r;
	}
	return pyramid;
}

int sumUnder(std::vector<std::vector<int>> py, int r, int c) {
	int sum = 0;
	for (int i = r-1; i <= py.size(); ++i) {
		for (int s = c; s <= i; ++s){
			sum += py[i][s];
			std::cout << py[i][s] << std::endl;
		}
	}
	return sum;
}

int main() {
	std::vector<std::vector<int>> py = createPyramid();

	int r{0}, c{0};
	std::cout << "Find sum under (r,c):" << std::endl;
	std::cin >> r >> c;
	std::cout << "Sum under: (" << r << ", " << c << ")"  << std::endl;
	std::cout << "Sum: " << sumUnder(py, r, c) << std::endl;

	return 0;
}