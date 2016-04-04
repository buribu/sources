//Factorial of a Number using Recursion

#include<stdio.h>
int fact(int);
int main(){
	int num,f;

	printf("\nEnter a number: ");
	scanf("%d",&num);

	f=fact(num);

	printf("\nFactorial of %d is: %d",num,f);
	return 0;
}

//recursive function
int fact(int n){
	if (n==1)
		return 1;
	else
		return (n*fact(n-1));
}
//sent via Codebox - A quick reference app for the most common programming problems. 
//http://goo.gl/mq11jY