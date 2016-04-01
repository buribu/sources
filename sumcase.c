#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
float sum(int x, int y);

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
	int x, y;
	x = 1;
	
	while (x != 0)
	{
		scanf("%d  %d", &x, &y);
		if (x == 0)
		{
			return 0;
		}
        printf("%.2f", sum(x, y)); 
	  }
    printf("none arguments!!"); 
    system("pause"); 
	return 0;
			   
}
			   
float sum(int x, int y)
{
    float z; 
			   
    z = x * y; 
			   
	 return z;
}