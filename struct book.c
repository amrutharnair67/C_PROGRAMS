#include<stdio.h>
#include<stdlib.h>
struct book
{
char book_name[25];
char author_name[25];
};
struct book *bptr;
void read(int n)
{
int i;
for(i=0;i<n;i++)
{
printf("\nEnter name of book %d:",i+1);
scanf("%s",(bptr+i)->book_name);
printf("Enter name of author %d:",i+1);
scanf("%s",(bptr+i)->author_name);
}
}
void display(int n)
{
int i;
for(i=0;i<n;i++)
{
printf("\nname of book %d is : %s",i+1,(bptr+i)->book_name);
printf("\nname of author %d is : %s",i+1,(bptr+i)->author_name);
}
}
void main()
{
int n;
printf("Enter the number of books:");
scanf("%d",&n);
bptr=(struct book*)malloc(n*sizeof(struct book));
read(n);
display(n);
}
