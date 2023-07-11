#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,i,m,n;
	printf("enter the value of n:");
	scanf("%d",&n);
	p=(int *)malloc(sizeof(int));
	for(i=0;i<n;i++){
		printf("enter the value at p[i]",i);
		scanf("%d",(p+i));
	}
	for(i=0;i<n;i++){
		printf("%d",*(p+i));
	}
	printf("\n");
	printf("enter the new size");
	scanf("%d",&m);
	p=(int*)realloc(p,sizeof(int)*m);
	for(i=n;i<m;i++)
	{
		printf("enter the value at p[i]");
		scanf("%d",(p+i));
	}
	for(i=0;i<m;i++)
	{
		printf("%d",*(p+i));
	}
}
