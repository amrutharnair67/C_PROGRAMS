#include<stdio.h>
int main()
{
	int a,s,i;
	printf("enter the limit:");
	scanf("%d",&i);
	printf("enter %d numbers",i);
	s=a=0;
	while(a<=i)
	{
		scanf("%d",&a);
		s=s+a;
		a++;
	}
		printf(" sum is %d",s);

	return 0;
 } 

