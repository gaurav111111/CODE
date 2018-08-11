#include<stdio.h>
#include<conio.h>
#include<malloc.h>
typedef struct node
{
	int coeff;
	int expo;
	struct node *next;
}node;
node *head=NULL, *p1, *p2, *p3=NULL;
void Create();
void Add();
void Display(node*);
void main()
{
	int choice;
	clrscr();
				printf("Create first polynomial\n");
				Create();
				p1=head;
				head=NULL;
				Display(p1);

				printf("Create second polynomial");
				Create();
				p2=head;
				head=NULL;
				Display(p2);

				Add();
				Display(p3);
				head=NULL;
   getch();
 }
void Create()
{
	int term, i;
	node *n,*t;
	printf("\nHow many terms in the polynomial ");
	scanf("%d",&term);
	for(i=1;i<=term;i++)
	{
		n=(node*)malloc(sizeof(node));
		n->next=NULL;
		printf("\n\nEnter coefficient ");
		scanf("%d",&n->coeff);
		printf("\nEnter Exponent ");
		scanf("%d",&n->expo);
		if(head==NULL)
		{
			head=n;
		}
		else
		{
			t=head;
			while(t->next!=NULL)
			{
				t=t->next;
			}
			t->next=n;
		}
		printf("\nTerm is inserted");
	}
}
void Add()
{
	node *n, *t, *p, *q;
	t=p1;
	p=p2;
	while(t!=NULL && p!=NULL)
	{
		n=(node*)malloc(sizeof(node));
		n->next=NULL;
			if(p3==NULL)
			{
			p3=n;
			}
		else
			q->next=n;

		q=n;
	 if(t->expo==p->expo)
		{
		    n->coeff=p->coeff+t->coeff;
		    n->expo=p->expo;
		    t=t->next;
		    p=p->next;
		}
		else if(t->expo>p->expo)
		{
		    n->coeff=t->coeff;
		    n->expo=t->expo;
		    t=t->next;
		}
		else
		{
		    n->coeff=p->coeff;
		    n->expo=p->expo;
		    p=p->next;
		}
	}
		 while(t!=NULL)
		{
			n=(node*)malloc(sizeof(node));
			n->next=NULL;
			n->expo=t->expo;
			n->coeff=t->coeff;
			q->next=n;
			q=n;
			t=t->next;
		}
		 while(p!=NULL)
		{
			n=(node*)malloc(sizeof(node));
			n->next=NULL;
			n->expo=p->expo;
			n->coeff=p->coeff;
			q->next=n;
			q=n;
			p=p->next;
		}
	       
}
void Display(node *t)
{
	printf("\n");
	while(t!=NULL)
	{
		printf("%d-%d\t",t->coeff,t->expo);
		t=t->next;
	}
}
