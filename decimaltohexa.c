//Decimal to Hexadecimal Conversion

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	long int num;
	clrscr();

	printf("Enter the decimal number : ");
	scanf("%ld",&num);
	
	long int rem[50],i=0,length=0;

	while(num>0)
	{
		rem[i]=num%16;
		num=num/16;
		i++;
		length++;
	}

	printf("Hexadecimal number : ");
	for(i=length-1;i>=0;i--)
	{
		switch(rem[i])
		{
			case 10:
			printf("A");
			break;
			case 11:
			printf("B");
			break;
			case 12:
			printf("C");
			break;
			case 13:
			printf("D");
			break;
			case 14:
			printf("E");
			break;
			case 15:
			printf("F");
			break;
			default :
			printf("%ld",rem[i]);
		}
	}

  return 0;	//getch();
}
//sent via Codebox - A quick reference app for the most common programming problems. 
//http://goo.gl/mq11jY