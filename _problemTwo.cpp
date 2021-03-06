/// Problem Two:
/// Each new term in the Fibonacci sequence is generated by adding the previous two terms. 
/// By starting with 1 and 2, the first 10 terms will be:

/// 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

/// By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even - valued terms.


/*
Techy's Feedback:

some points for improvement:
-term1 will always be >= to term2, so you don't need to check both term1 and term2 against TERM_LIMIT, 
	just checking term1 will be fine
- some comments would make your code clearer
- the comment I made about aNumber
- your TERM_LIMIT check could be part of the while condition, simplifying the code a bit
*/


int problemTwo()
{
	int term1 = 1;
	int term2 = 0;
	int temp;
	const int TERM_LIMIT = 4000000;
	int sum = 0;

	// loop until the term limit of 4 million
	// is reached by the first fib term.
	while (term1 <= TERM_LIMIT)
	{
		// Check to see if term is even, if so add it to sum.
		if (term1 % 2 == 0)		sum += term1;

		// calculate the fib of the next loop
		temp = term1;
		term1 = term1 + term2;
		term2 = temp;
	}
	return sum;
}