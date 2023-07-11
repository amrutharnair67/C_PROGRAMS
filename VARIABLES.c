#include<stdio.h>
int k;
void local()
{
int a=7;
printf("%d\n",a);
}
void stat()
{
static int a;
printf("%d\n",a++);
}
int main()
{
local();
local();
stat();
stat();
stat();
register int i;
int a;
a=0;
for(i=0;i<7;i++)
{
a=a+i;
printf("%d\t%d\n",a,i);
}
return 0;
}

