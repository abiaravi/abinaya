#include <stdio.h>
int main(void) 
{
	long long int re=1,ba,ex;
	scanf("%lld",&ba);
	scanf("%lld",&ex);
	while(ex!=0)
	{
		re=re*ba;
		ex--;
	}
	printf("%lld",re);
}
