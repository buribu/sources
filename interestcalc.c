//Compound Interest Calculation

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float p,t,r;
	float i,compound,a;
	clrscr();

	printf("enter principal:\t");
	scanf("%d",&p);

	printf("enter rate of interest:\t");
	scanf("%d",&r);

	printf("enter time in years:\t");
	scanf("%d",&t);

	if((p<1)||(t<1)||(r<1))
		printf("invalid");
	else
	{
		a=(float)p*(pow(1+r/100.0,t));
		compound=a-p;
		printf("the compound interest is rs.%.2f",compound);
	}
return 0;//	getch();
}
//sent via Codebox - A quick reference app for the most common programming problems. 
//http://goo.gl/mq11jY