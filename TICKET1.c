#include<stdio.h>
#include<stdlib.h>

 struct person
 {
	char name[20];
	int pid;
    char address[20];
	int seat;
	struct person *next;
	
 };
	
typedef struct person node;
node *head=NULL;

int arr[100];       //global array for storing seat info

void arr_init()                   // function to initialize array elements to zero 
{
	int i;
	for( i=1;i<=100;i++)
	  arr[i]=0;
}
void booking()         
{
	node *temp;
	temp=(node*)malloc(sizeof(node));;
	
	int seatno;
	char ch[100];
	
	printf("\nENTER THE FOLLOWING DETAILS\n");
	printf("\nName: ");
	scanf("%s",temp->name);
	printf("\nSeat no: ");
	scanf("%d",&seatno);
	
	int flag=0;
	node *check;
	check=head;
	if(head==NULL)
	{ flag=0;}
	
	else
	{
		while(check!=NULL)
		{   
		  // checking whether seat is already booked or not
		  
			if(seatno==check->seat)      
			{
				flag=1;
				printf("\n\t\tSeat already booked.");
				break;
			}
			else
			{
				check=check->next;
			}
		}
	}

    
	if(flag==0)        
	{	
		temp->seat=seatno;
			
		printf("\nAddress: ");
		scanf("%s",temp->address);
		
		temp->next=NULL;
		
		arr[seatno]=1;                 // changing the value of array element for booked seat
		
		printf("\n\nSEAT BOOKED");
	
		if(head==NULL)
		{
			head=temp;
		}
		else
		{
			node *t;
			t=head;
			while(t->next!=NULL)
				t=t->next;
			t->next=temp;
	}
	
	
   }
	
}
   


void cancel()        
{     
      int flag=0;
      
       node *temp;                 
      int seatno;
	printf("\n\t\tEnter the seat no.: ");
	scanf("%d",&seatno);

      if(head->seat == seatno)
      {
          temp = head;           
          head = head->next;
          flag=1;
          arr[seatno]=0;
          free(temp);   
		  printf("\n\n\t\tUr booking for seat no: %d have been cancelled.",seatno);   
		             
      }
      else
      {
          node *current  = head;
          while(current->next != NULL)
          {
              
              if(current->next->seat == seatno)
              {
			      temp = current->next;
                  
              
                  current->next = current->next->next;
                  
                  flag=1;
                  arr[seatno]=0;
                  free(temp);    
				  printf("\n\n\t\tUr booking for seat no: %d have been cancelled.",seatno);           
                  break;
                  
              }
             
              else
                  current = current->next;
          }
      }
 
}

//function to display seat array
void display()    
{
    int i;
	printf("\n==========================================================================");
		printf("\n\t\t\t\t    SCREEN\n\n\n");
		
	
		for (i=1;i<=100; i++)
		{   
		
			if (arr[i]==0)           // ie; seat not taken
				printf("%d\t",i);
			else 
				printf("*\t");	  // shows * for booked seats
			if(i%10==0)               // jump to next row
				printf("\n\n");
		}
	
	
		
}


int menu()
{
	int ch;
    	printf("\n\t\t\t\t\t\t\t\t\t      TICKET RESERVATION SYSTEM");
	    printf("\n\t\t\t\t\t\t\t\t\t   *********************************"); 
	    
	printf("\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t\t1.Booking\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t\t2.Cancel\n");
	printf("\n\t\t\t\t\t\t\t\t\t\t\t3.Exit\n");
	printf("\nEnter ur choice: ");
	scanf("%d",&ch);
	return(ch);
}

int main()
{   
        
         arr_init();
         
	while(1)
	{
		switch(menu())
		{
			case 1:	display();
			        booking();break;
			case 2: cancel();break;
			case 3: exit(0);break;
		
	       default: printf("\nU entered the wrong option.");
		}
	}
	return(0);
}

