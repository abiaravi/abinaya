#include <stdio.h>
int main(void) 
{
	int n1,n2,i;
	scanf("%d %d",&n1,&n2);
	for(i=n1;i<n2;i++)
	{
		if(i%2==1)
		{
			printf("%d\n",i);
		}
	}
	// your code goes here
	return 0;
}
