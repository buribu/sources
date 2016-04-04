//Floyd triangle pattern

#include <stdio.h>

int main()
{
	int n, i,  c, a = 1;
	
	printf("Enter the number of rows of Floyd's triangle to print\n");
	scanf("%d", &n);
	printf("Floyd's triangle\n");
	for (i = 1; i <= n; i++)
	{
		for (c = 1; c <= i; c++)
		{
			printf("%d ",a);
			a++;
		}
		printf("\n");
	}
	
	return 0;
}
//sent via Codebox - A quick reference app for the most common programming problems. 
//http://goo.gl/mq11jY