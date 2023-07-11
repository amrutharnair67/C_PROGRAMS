#include<stdio.h>
void rev(char s[],int count)
{
	char c;
	int i,j;
  while(s[count]!='\0')
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
	printf("Reverse:%s",s);	
}
int main()
{
	char s[100];
	int count=0;
	printf("Enter word:");
	scanf("%s",s);
	rev(s,count);
	return 0;
}
