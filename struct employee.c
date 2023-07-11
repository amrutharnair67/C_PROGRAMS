#include<stdio.h>
#define N 10
struct employee
{
	int eno;
	char enames[10];
	int esal;
	int dno;
};
void read(struct employee emp[N],int n)
{
	int i;
printf("\n");
	for(i=1;i<=n;i++)
	{
	printf("Enter the eno of employee %d:",i);
	scanf("%d",&emp[i].eno);
	printf("Enter the ename of employee %d:",i);
	scanf("%s",emp[i].enames);
	printf("Enter the esal of employee %d:",i);
	scanf("%d",&emp[i].esal);		
	printf("Enter the dno of employee %d:",i);
	scanf("%d",&emp[i].dno);
	printf("\n");
	}
}
void display(struct employee emp[N],int n)
{
int i;
printf("\n");
for(i=1;i<=n;i++)
{
	printf("emp no:%d\n",emp[i].eno);
	printf("enames no:%s\n",emp[i].enames);
	printf("esal no:%d\n",emp[i].esal);
	printf("dno no:%d\n",emp[i].dno);
	printf("\n");
	
}
}
void search(struct employee emp[N],int n)
{
	int no,i,flag=-1;
	printf("Enter the eno:");
	scanf("%d",&no);
	for(i=1;i<=n;i++)
	{
		if(emp[i].eno==no)
		{
		flag=i;
		}
		else
		{
			flag=-1;
		}
	}
	if(flag !=-1)
	{
	printf("\n**Details**\n");
	printf("emp no:%d\n",emp[flag].eno);
	printf("enames no:%s\n",emp[flag].enames);
	printf("esal no:%d\n",emp[flag].esal);
	printf("dno no:%d\n",emp[flag].dno);
	printf("\n");
	}
	else
	{
		printf("\nEmployee not found");
	}
}
void sort(struct employee emp[N],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(emp[i].esal>emp[j].esal)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
int main()
{
	int n;
	struct employee emp[N];
	printf("Enter the number of employee:");
	scanf("%d",&n);
	read(emp,n);
	display(emp,n);
	search(emp,n);
	return 0;
}
