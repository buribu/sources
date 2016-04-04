//Even Odd Number

#include <stdio.h> 
int main(){
	int num; 

	printf("Enter an integer you want to check: ");
	scanf("%d",&num);

	 /* Checking whether remainder is 0 or not. */
	if((num%2)==0) 
		printf("%d is even.",num); 
	else 
		printf("%d is odd.",num);
	return 0; 
} 
//sent via Codebox - A quick reference app for the most common programming problems. 
//http://goo.gl/mq11jY