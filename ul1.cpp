#include<stdio.h>
char main()
{
	char ch;
	printf("Enter any character:");
	scanf("%c",&ch);
	if(ch>='A'&&ch<='Z')
	printf("%c is uppercase",ch);
	else if(ch>='a'&&ch<='z')
	printf("%c is lowercase",ch);
	else
	printf("wrong character");
	return 0;
}
