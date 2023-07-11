#include<stdio.h>
int main()
{
	char c;
	int uppercase_vowel,lowercase_vowel;
	printf("Enter any character :");
	scanf("%c",&c);
	uppercase_vowel=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
	lowercase_vowel=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
	if(uppercase_vowel||lowercase_vowel)
	printf("%c is vowel",c);
	else
	printf("%c is consonant",c);
	return 0;
}
