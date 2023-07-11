#include<stdio.h>
int disp(int s)
{
	int a;
	if(s==0)
	printf("\n");
	else
 {
 	disp(s-1);
 	printf("%d",s);
 	}
	
}
int main()
{
	int n;
	printf("Enter the num:");
	scanf("%d",&n);
	disp(n);
	return 0;
}


