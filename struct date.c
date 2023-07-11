#include<stdio.h>
struct date
{
	int day;
	int month;
	int year;
	
};
struct date sd1,sd2;
void read_date()
{
	printf("enter the first date in dd/mm/yyyy format:");
	scanf("%d%d%d",&sd1.day,&sd1.month,&sd1.year);
	printf("enter the second date in dd/mm/yyyy format:");
	scanf("%d%d%d",&sd2.day,&sd2.month,&sd2.year);
	
	
}
void disp()
{
	printf("\nfirst date:%d%d%d",sd1.day,sd1.month,sd1.year);
		printf("\nsecond date:%d%d%d",sd2.day,sd2.month,sd2.year);
}
void comp_date()
{
	if((sd1.day==sd2.day)&&(sd1.month==sd2.month)&&(sd1.year==sd2.year))
	{
		printf("\nfirst date and second date are same!!");
	}
	else
	{
		printf("\nfirst date and second date are not same:");
	}
}
void main()
{
	read_date();
	disp();
	comp_date();
}
