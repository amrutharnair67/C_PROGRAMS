#include<stdio.h>
int main()
{
	char s[100],c;
	int i,j,count=0;
	printf("enter the string");
	scanf("%s",s);
	while(s[count]!=0)
	{
		count++;
	}
	j=count-1;
	for(i=0;i<j;i++)
	{
		c=s[i];
		s[i]=s[j];
		s[j]=c;
		j--;
	}
	printf("\nrev of string :%s",s);
	return 0;
}
