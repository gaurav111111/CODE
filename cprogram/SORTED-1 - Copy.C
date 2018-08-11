#include<stdio.h>
#include<conio.h>
#include<alloc.h>
typedef struct nodetype
{
int info;
struct nodetype *next;
}node;
node *ins_beg(node*);
void traverse(node*);
node *strt=NULL,*ptr,*newptr,*temp,*ptemp;
void main()
{
clrscr();
strt=ins_beg(strt);
traverse(strt);
getch();
}
node *ins_beg(node *strt)
{

	node *ptr;
	int ele,option;
	do
	{
	printf("enter the ele ");
	scanf("%d",&ele);
	ptr=(node*)malloc(sizeof(node));
	ptr->info=ele;
	ptr->next=NULL;
	if(strt==NULL)
	{
		strt=ptr;
	}
	else if(strt->next==NULL)
		{
			if(strt->info>=ptr->info)
			{
				ptr->next=strt;
				strt=ptr;
			}
			else
			{
			strt->next=ptr;
		}}
		else
		{
		temp=strt;
		while(temp!=NULL)
			{
			      if(temp->next->info>=ptr->info)
			      {
			      ptr->next=temp->next;
			      temp->next=ptr;
			      break;
			      }
			      if(temp->next==NULL)

			      {
			      temp->next=ptr;
			      temp=ptr;
			      }

			      temp=temp->next;
			}


			}




	printf(" enter to insert moe node ");
	scanf("%d",&option);
	}while(option==1);
	return strt;
}
void traverse(node *strt)
{
	node *temp;
	temp=strt;
	while(temp!=NULL)
	{
		printf("%d\n",temp->info);
		temp=temp->next;
	}
}


























































































































































