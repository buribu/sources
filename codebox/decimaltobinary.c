//Decimal to Binary Conversion

 #include<stdio.h>


int main(){
	long int decimalNumber,remainder,quotient;
	int binaryNumber[100],i=1,j;

	printf("Enter any decimal number: ");
	scanf("%ld",&decimalNumber);

	quotient = decimalNumber;
	while(quotient!=0){
		binaryNumber[i++]= quotient % 2;
		quotient = quotient / 2;
	}

	printf("Equivalent binary value of decimal number %d: ",decimalNumber);
	for(j = i -1 ;j> 0;j--)
		printf("%d",binaryNumber[j]);

	return 0;
}
//sent via Codebox - A quick reference app for the most common programming problems. 
//http://goo.gl/mq11jY