#include <string>
/*
Problem 4
Largest Palindrome Product

A palindromic number reads the same both ways. The largest palindrome made 
from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

bool isPalindrome(uint32_t aNumber)
{
	/**
	*	This function is specifically designed to find palindromes of products
	*	of two three digit numbers. It always assumes that the input value is
	*	a six digit integer.
	*	params -> uint32_t of a max value of 998001.
	*	\return true is palindrome, false otherwise
	*/
	std::string aString = std::to_string(aNumber);
	const int stringLen = 6;
	std::string left = aString.substr(0, stringLen / 2);
	std::string right = aString.substr(stringLen / 2, stringLen);
	std::reverse(right.begin(), right.end());
	return left == right;
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
	uint32_t largestPalindrome = 0;
	while (term2 > 900)
		// 900 is enough as anything below this will not be largest palindrome.
	{
		for (size_t i = term1; i > 900; i--)
		{
			uint32_t product = i * term2;
			if (isPalindrome(product))
			{
				if (product > largestPalindrome)
				{
					// if this new palindrome is larger then the old one,
					// make it the new largest.
					largestPalindrome = product;
				}
			}
		}
		term2--;
		term1 = term2;
	}
	return largestPalindrome;
}
