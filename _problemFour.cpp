#include <string>
/**
Problem 4
Largest Palindrome Product

A palindromic number reads the same both ways. The largest palindrome made 
from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

bool isPalindrome(uint32_t aNumber)
{
	/**
	*	This function returns true if the number passed in is a palindrome, false otherwise 
	*	params -> uint32_t int
	*	\return true is palindrome, false otherwise
	*/
	std::string aString = std::to_string(aNumber);
	uint32_t stringLen = aString.length();

	for (size_t i = 0; i < stringLen / 2; i++) {
		if (aString[i] != aString[aString.length() - 1 - i]) 
		{ 
			return false; 
		}
	}
	return true;
};

uint32_t largestPalindromeProduct()
{
	/**
	 * Finds largest palindome product of two 3digit numbers (term1 and term2).
	 * Function checks every combination in descending order starting from 999x999
	 * to 900x900.
	 *
	 * \return largest palindrome.
	 */
	uint16_t term1 = 999;
	uint16_t term2 = 999;
	uint16_t termLimit = 900;
	uint32_t largestPalindrome = 0;
	while (term2 > termLimit)
	{
		for (size_t i = term1; i > termLimit; i--)
		{
			uint32_t product = i * term2;
			if ((product > largestPalindrome) && (isPalindrome(product)))
			{
					largestPalindrome = product;
			}
		}
		term2--;
		term1 = term2;
	}
	return largestPalindrome;
}

/** 
Since you're doing this to learn C++ and practice programming, these are more general points to think about!

std::string left = aString.substr(0, stringLen / 2);
std::string right = aString.substr(stringLen / 2, stringLen);
std::reverse(right.begin(), right.end());
You can do this without creating these two extra strings. Have a go (understand why is a common interview question too...).

uint32_t largestPalindromeProduct()
Your solution is hard-coded to only work with 3 digit numbers. You can generalise this fairly easily so that it works with 2 digit numbers as well as 4 digit etc...

// if this new palindrome is larger then the old one,
// make it the new largest.
I feel like this comment adds nothing given the if statements just above it.

*/
