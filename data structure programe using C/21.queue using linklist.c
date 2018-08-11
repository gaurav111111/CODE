#include<stdio.h>
#include<conio.h>
typedef struct nodetype
{
int info;
struct node *next;
}node;

node *front=NULL,*rear=NULL,*ptr,*temp;

node *insert(node *rear, int ele)
{
	ptr=(node*)malloc(sizeof(node));
	ptr->info=ele;
	ptr->next=NULL;
	if(front==NULL&&rear==NULL)
	{
		front=rear=ptr;
	}
	else
	{
		temp=rear;
		while(temp!=NULL)
		{
		temp=temp->next;
		}
		temp->next=ptr;
		rear=ptr;
	}
return rear;
}
node * del()
{
	if(front==NULL)
	{
		printf("\n queue is empty\n");
	}
	else if(front->next==NULL)
	{
		ptr=front;
		front=rear=NULL;
		free(ptr);
	}
		else
		{
		ptr=front;
		front=front->next;
		free(ptr);
		}
return front;
}

void traverse(node *front)
{
	temp=front;
	while(temp!=NULL)
	{
		printf("%d",temp->info);
		temp=temp->next;
	}
}


void main()
{
int option,choice,ele;
clrscr();
do
{
printf("\n press 1 for insert \n press 2 for delete \n presss 3 for traverse \n press 4 for exit \n ");
printf("\n------------------------\n");
printf("enter your choice\n ");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf(" enter the element to insert \n");
scanf("%d",&ele);
rear=insert(rear,ele);
break;
case 2:

front=del(front);
break;
case 3:
traverse(front);
break;
case 4:
exit(0);
default :
printf("m invalid choice ");
}
printf("\npress 7 to continue \n ");
scanf("%d",&option );
}while(option==7);
getch();
}


