//Depreciation Calculation

#include<conio.h>
#include<stdio.h>
int main()
{
	float sv,pv,dep;
	int yos;
	clrscr();

	printf("Enter the purchase value :- ");
	scanf("%f",&pv);

	printf("Enter the year of service :- ");
	scanf("%d",&yos);

	printf("Enter the value of depreation :- ");
	scanf("%f",&dep);


	sv = pv - (dep * yos);
	printf("\n The salvage value equal to :- %f",sv);

return 0;//	getch();
}
//sent via Codebox - A quick reference app for the most common programming problems. 
//http://goo.gl/mq11jY