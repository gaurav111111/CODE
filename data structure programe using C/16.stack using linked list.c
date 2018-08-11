#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//#include<alloc.h>
typedef struct nodetype
{
	int data;
	struct nodetype * next;
}node;
node *top=NULL,*ptr,*newptr,*temp;
void push();
int pop();
void peek();
void traverse();
void main()
{

	int choice,option,ele;
	clrscr();
	do{
		printf("press 1 for push \npress 2 for pop \npress 3 for peek\npress 4 for traverse \n ");
		printf("\n-----------------------\n");
		printf("enter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			push();
			break;
			case 2:
			ele=pop();
			printf("pop element =%d\n",ele);
			break;
			case 3:
			peek();
			break;
			case 4:
			traverse();
			break;
			default :
			exit(0);
		}
		printf(" press 1 to continue \n ");
		scanf("%d",&option);
	}while(option==1);
getch();
}
	void push()
	{
		newptr=(node*)malloc(sizeof(node));
		printf(" enter the element ");
		scanf("%d",&newptr->data);
		newptr->next=NULL;

		if(top==NULL)
		   top=newptr;
		else
		  {
		   newptr->next=top;
		   top=newptr;
		  }
	}
	int  pop()
	{
	int ele;
		if(top==NULL)
		 {
			printf(" stack is underflow");
			exit(0);

		 }
		 ele=top->data;
		 ptr=top;
		 top=top->next;
		 free(ptr);
	     return ele;
	 }
	 void peek()
	 {
		if(top==NULL)
		{
		printf(" underfllow");
		return;
		}
	 else
		 printf("%d",top->data);
	 }
	  void traverse()
	 {

		if(top==NULL)
		{
		printf(" underfllow");
		return;
		}
	 temp=top;
	 while(temp!=NULL)
	 {
		 printf("%d\n",temp->data);
		 temp=temp->next;
	 }
	}
































































































































































