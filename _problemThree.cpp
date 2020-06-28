#include <vector>
#include <math.h>
using namespace std;

/*
	Problem 3: Largest Prime Factor
	The prime factors of 13195 are 5, 7, 13 and 29.
	What is the largest prime factor of the number 600851475143 ?
*/


// Step one -> Find all the factors of a given number
vector<int> findFactors(uint64_t aNumber)
{
/*
	function finds positive factors of aNumber after 2 until the square root of aNumber.
	input > aNumber - potentially very large int. (long long)
	output > an int vector of all the positve factors of aNumber above 2 until the square root of aNumber.
*/
	vector<int> factors;
	for (size_t i = 1; i <= sqrt(aNumber); ++i)
	{
		if (aNumber % i == 0) {
			factors.push_back(i);
		}
	}
	return factors;
};

// Step Two -> Check which factors are prime.
bool isPrime(uint64_t aFactor)
{
/*
	function checks to see if a number passed in is prime.
	input > aFactor: large int 
	output > boolean true if aFactor is prime, false otherwise.
*/
	const vector<int> theFactors = findFactors(aFactor);
	return theFactors.size() == 1;
}

// Step Three -> Find the largest prime factor of 'theNumber'.
int largestPrimeFactor(uint64_t theNumber)
{
/*
	function returns the largest prime factor of a given number.
	input > theNumber: large int
	output > int 
*/
	int largestPrime = 2;
	vector<int> allFactors = findFactors(theNumber);

	for (int aFactor : allFactors)
	{
		if (isPrime(aFactor))
		{
			largestPrime = aFactor;
		}

	}
	return largestPrime;
}
