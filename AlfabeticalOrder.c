//Alphabetical Sort

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
	char name[10][8], tname[10][8], temp[8];
	int i, j, n;
	printf("Enter the value of n \n");
	scanf("%d", &n);
	printf("Enter %d names ", n);
	for (i = 0; i < n; i++)
	{
		fgets(name[i],8,stdin);
		strcpy(tname[i], name[i]);
	}
	for (i = 0; i < n - 1 ; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (strcmp(name[i], name[j]) > 0)
			{
				strcpy(temp, name[i]);
				strcpy(name[i], name[j]);
				strcpy(name[j], temp);
			}
		}
	}
	printf("\n----------------------------------------\n");
	printf("Input Names\tSorted names\n");
	printf("------------------------------------------\n");
	for (i = 0; i < n; i++)
	{
		printf("%s\t\t%s\n", tname[i], name[i]);
	}
	printf("------------------------------------------\n");
	//getch();
	return 0;
}
//sent via Codebox - A quick reference app for the most common programming problems. 
//http://goo.gl/mq11jY