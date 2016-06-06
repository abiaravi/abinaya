#include <stdio.h>
int main(void) 
{
	int i,n,a[100],sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>0)
		sum+=a[i];
	}
	printf("%d",sum);
	return 0;
}
