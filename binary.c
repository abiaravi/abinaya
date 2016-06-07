#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,k;
	scanf("%d",&n);
	for(i=31;i>=0;i--)
	{
		k=n>>i;
		if(k&&1)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
}
