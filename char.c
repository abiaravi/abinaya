#include <stdio.h>
int main(void) 
{
	char str;
	scanf("%c",&str);
	if((str>='a' && str<='z') || (str<'A' && str>'Z'))
	{
		printf("alphabet");
	}
	else
	{
		printf("number");
	}
}
