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
	function finds positive factors of aNumber after 2 and excluding itself.
	input > aNumber - potentially very large int. (long long)
	output > an int vector of all the positve factors of aNumber above 2 and excluding itself.
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


/* TECHY'S FEEDBACK:
- You use long long int: why?
- Once you've answered the above, is there a better way to express that?
- Very minor point here. int largestPrime = 0;: you could start this at the first prime number, 2. This avoids the strange situation of having largestPrime not be prime (since 0 isn't).
- Another minor point: using namespace std; is a tool you should use sparingly, with a good understanding of the consequences (both good and bad). Are you aware of these?
- vector<int> allFactors this could be made const.
- Subjective point: You could also use auto to deduce the type above,  but there are arguments for and against that.
- findFactor has a name that implies it will find a single factor. Perhaps findFactors?
- findFactor is documented to "find all factors of a given number", but it does not do that.
- You have code of the form if (expression) { return true; } else { return false; }, this can be simplified to return expression
- You have a for loop where you just use i to index a container and nothing else. You can use a range-based for loop to simplify this.
- You are not compiling with warnings turned on and set to errors, as I can see some things that would trigger warnings in there. Rather than point them out, it's better to get you to learn how to get the tools to tell you what's up!
- There are micro-optimisations you can make. Rather than pointing them out, however, perhaps you can use the profiler built into Visual Studio (or whatever you're using) and find some things yourself.
- How long does your code take to run?
- There are some very simply optimisations you can make, which if you get stuck I can walk you through.

*/
