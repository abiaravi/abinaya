#include<stdio.h>
int main()
{
	int n,i,re;
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		re=i*n;
		printf("%d*%d=%d\n",i,n,re);
	}
}
