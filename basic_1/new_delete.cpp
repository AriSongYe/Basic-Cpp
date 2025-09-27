#include <iostream>

int main() {
	int arrsize;

	std::cout << "Please enter arr size" << std::endl;
	std::cin >> arrsize;
	std::cout << "arr size is " << arrsize << std::endl; 

	int *ptr = new int[arrsize];

	for (int i = 0; i < arrsize; i++) {
		std::cout << "Please enter num arr element" << std::endl;
		std::cin >> ptr[i];
	}

	for (int i = 0; i < arrsize; i++) {
		std::cout << i << "th Element is " << ptr[i] << std::endl;
	}


	delete[] ptr;

	return 0;
}

