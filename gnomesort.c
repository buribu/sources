//Gnome Sort

#include <stdio.h>
int main()
{
	int i, temp, ar[10], n;
	printf("\nenter the elemts number u would like to enter:");
	scanf("%d", &n);
	printf("\nenter the elements to be sorted through gnome sort:\n");
	for (i = 0; i < n; i++)
		scanf("%d", &ar[i]);
	i = 0;
	while (i < n)
	{
		if (i == 0 || ar[i - 1] <= ar[i])
			i++;
		else
		{
			temp = ar[i-1];
			ar[i - 1] = ar[i];
			ar[i] = temp;
			i = i - 1;
		}
	}
	for (i = 0;i < n;i++)
		printf("%d\t", ar[i]);
		return 0;
}

//sent via Codebox - A quick reference app for the most common programming problems. 
//http://goo.gl/mq11jY