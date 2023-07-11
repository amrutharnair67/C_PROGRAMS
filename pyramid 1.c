#include<stdio.h>
void print(int a,int b)
{
	
	if(a<b)
	{
     int i;
	for(i=a;i<=b;i++)
	printf("%d",i);
   }
   else
   {
   	int i;
   	for(i=a;i>=b;i--)
   	printf("%d",i);
   }
     
}
void main()
{
	int m,n;
	printf("enter the value of m,n:");
	scanf("%d%d",&m,&n);
	print(m,n);
}
