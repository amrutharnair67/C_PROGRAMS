#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the value for n");
	scanf("%d",&n);
	i=n;
	while(i>=1)
	{
		printf("%d\t",i);
		i--;
	}
	return 0;
}
