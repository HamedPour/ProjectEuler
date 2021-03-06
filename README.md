### Project Euler 

## Fun
A bit of fun with with some C++, math and computational thinking.

Oh and when I say "fun" I actually mean getting through a few hundred A4 pages 
and raging at the ccp files.... 

## Further details
For further details on Project Euler go [Here](https://projecteuler.net/)
If you're feeling adventurous go ahead and try a few of the problems.
Just remember to solve them first on paper before you start to code.

Have "fun" :)


## Personal thoughts on solutions
1. The first problem was rather easy. It was all about using the modulus operator and a single for loop.
	I must however add the there are some very sophisticated solutions to it out there that are worth looking over.

1. This second problem took a few hours of thinking. The issue that I found difficult was trying to solve this problem
	using recursion. despite the fact that fib is much easier to code and understand using recursion it was not as simple
	when it came to suming even terms. In the end I used a while loop. Another interesting point was that f(n-1) was more 
	than enough to check to see if the term limit was reached since f(n-2) will always be behind it.

	After Feedback from Techy, I made some minor changes to the code and added comments. I tried to find a recursive solution
	to the problem but sadly could not find one that worked. I will return to this at a later date.

1. Problem Three was rather difficult. It took a good few days. The biggest challenge was trying to optimise prime factorisation. 
	In the end I had to consult a few stack-overflow posts in order to crack it.  

1. Problem four was a walk in the park compared to the previous problem. The only minor challenge I faced was in dealing with
	C++ strings and string methods in order to find the palindrome correclty for a six digit number.
	Update: I decided to use a single string with a for loop to find the palindrome instead. It readys much nicer and has better
	performance.

1. This question "What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?" seemsed very
	simple at first but then it took around 12 seconds to complete. Optimisation took some time figuring out. In the end the trick
	to understand that any number that the answer would be much always be divisible by 20. This way instead of checking each number
	one by one we can check 20 at a time. It brings computation time down to 480000 micro seconds. 
