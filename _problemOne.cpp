
/// Problem One:
/// If we list all the natural numbers below 10 that are 
/// multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
///
/// Find the sum of all the multiples of 3 or 5 below 1000.

int problemOne()
{
	int length = 1000;
	int totalSum = 0;
	for (size_t i = 0; i < length; i++)
	{
		if (i % 3 == 0)
		{
			totalSum += i;
		}
		else if (i % 5 == 0)
		{
			totalSum += i;
		}
	}
	return totalSum;
}