#include<stdio.h>
#include<string.h>
int main()
{
	char str[1000],i,count=0;
	scanf(" %[^\n]s",str);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]==' ')
		{
			count++;
		}
	}
	printf("%d",count+1);
}
