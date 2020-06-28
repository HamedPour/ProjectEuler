#include <iostream>
#include <chrono>


// I'll link the problems like this for now. Later give them a proper header file.
// int problemOne();
// int problemTwo();
// int largestPrimeFactor(uint64_t theNumber); // Problem three
uint32_t largestPalindromeProduct();

int main()
{
	std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();



	std::cout << largestPalindromeProduct() << std::endl;
	

	
	std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();

	std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count() << "[mircos]" << std::endl;
	std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::nanoseconds> (end - begin).count() << "[nanos]" << std::endl;
}


