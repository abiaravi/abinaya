#include <stdio.h>
int main(void) 
{
	char str;
	scanf("%c",&str);
	if(str=='a' || str=='e' || str=='i' || str=='o' || str=='u')
	{
		printf("vowel");
	}
	else
	{
		printf("consonant");
	}
}
