//Factorial of a Number

#include <stdio.h>

int main()
{
	int c, n, fact = 1;
	
	printf("Enter a number to calculate it's factorial\n");
	scanf("%d", &n);
	
	for (c = 1; c <= n; c++)
		fact = fact * c;
	
	printf("Factorial of %d = %d\n", n, fact);
	
	return 0;
}
//sent via Codebox - A quick reference app for the most common programming problems. 
//http://goo.gl/mq11jY