/**
 * 2520 is the smallest number that can be divided by each of the
 * numbers from 1 to 10 without any remainder.
 *
 * What is the smallest positive number that is evenly divisible
 * by all of the numbers from 1 to 20?
 */

// Helper function - check if a number is divisible 1to20
bool isDivisibleMINtoMAX(int aNumber)
/**
* function returns true if aNumber is divisible by all the numbers
* from MIN_DIV to MAX_DIV.
*	input -> aNumber int
*/
{
	const int MAX_DIVISIBILITY = 21;
	const int MIN_DIVISIBILITY = 2;
	int something = 33;
	int* pointer = &something;

	for (size_t i = MIN_DIVISIBILITY; i < MAX_DIVISIBILITY; i++)
	{
		if (aNumber % i != 0) return false;
	}
	return true;
}

// main function - Go through every number from 1 to targetNumber checking
int smallestDivisibleNumber1to20()
{
	int number = 20;

	while (true)
	{
		if (isDivisibleMINtoMAX(number))
		{
			// you found it!

			break;
		}
		number = number + 20;

	}
	return number;

}
// if it is divisible 1to20
