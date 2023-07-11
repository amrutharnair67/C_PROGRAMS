#include<stdio.h>
#include<stdlib.h>
int main(){
	int *p,i,n,m;
	printf("enter the value of n: ");
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		printf("the value at p[%d]: ",i);
		scanf("%d",(p+i));
	}
	for(i=0;i<n;i++){
		printf("%d\t",*(p+i));
	}
	printf("\n");
	printf("enter the new size: ");
	scanf("%d",&m);
	p=(int *)realloc(p,sizeof(int)*m);
	if(m>n){
		for(i=n;i<m;i++){
			printf("the value at p[%d]: ",i);
			scanf("%d",(p+i));
		}
	}
	for(i=0;i<m;i++){
		printf("%d\t",*(p+i));
	}
	free(p);
}
