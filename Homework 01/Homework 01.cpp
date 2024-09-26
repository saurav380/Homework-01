#include <iostream>
#include<vector>

void printBinary(int n) {
	std::vector<int>binaryDigits;

	while (n > 0) {
		binaryDigits.push_back(n % 2);
		n /= 2;

	}

for (int i = binaryDigits.size() - 1; i >= 0; i--) {
	std::cout << binaryDigits[i];
}
std::cout << std::endl;
}
int main() {
	int number;

	std::cout << "Enter a positive integer";
	std::cin >> number;

	if (number < 0) {
		std::cout << "Please enter a positive integer." << std::endl;
		return 1;
	}
	std::cout << "Binary representation";
	printBinary(number);
	return 0;
}