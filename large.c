#include <stdio.h>
int main(void) 
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a>=b && a>=c)
	{
		printf("the largest number is %d",a);
	}
	else if(b>=c && b>=a)
	{
		printf("the largest number is %d",b);
	}
	else
	{
		printf("the largest number is %d",c);
	}
	// your code goes here
	return 0;
}
