#include<stdio.h>
#include<conio.h>
# define MAX 3
void insert(int);
void dele( );
void traverse ();
int queue[MAX];
int front=-1,rear=-1;
	void main()
	{
		int n,e,option;
		clrscr();
		do
		{
		printf("enter the choice\n ");
		printf("press 1 for insert,\n press 2 for dele \n press 3 for traverse \n ");
		printf("\n ------------------------\n");
		scanf("%d",&n);
		switch(n)
		{
		case 1:
		       printf("enter the element to insert");
		       scanf("%d",&e);
		       insert(e);
		       traverse();
		       break;
		 case 2:
			dele();
			traverse();
			break;
		 case 3:
			 traverse();
			 break;
		 default :
			printf("enter the valid number");
		    }
		    printf("for continue press 7:");
		    scanf("%d\n",&option);
		}while(option==7);
		getch();
		}
		void insert(int e)
		{
			if((front==0&&rear==MAX-1) ||(front==rear+1))
			{
				printf("queue is full");
			  }
			  else if(front==-1&&rear==-1)
			  {
			   front=0;
			   rear=0;
			   queue[rear]=e;
			  }
				else if(rear==MAX-1)
				{
				rear=0;
				queue[rear]=e;
				}

				else
				{
				rear=rear+1;
				queue[rear]=e;
				}
		 }
		 void dele( )
		 {
			int a;
			if(front==-1&&rear==-1)
			{
				printf("queue is empty \n ");
			}
				else if(front==rear)
				{
				front=-1;
				rear=-1;
				}
				else if(front==MAX-1)
				{
					front=0;
				}
				else
				{
				 a=queue[front];
				 printf("deleted element is %d",a);
				 front=front+1;
				}
		}
		    void traverse( )
		    {
			int i;
                if(front<=rear)
			{
				for(i=front;i<=rear;i++)

			{
			printf("%d \t  ",queue[i]);
			}

		     }
		      if(front==MAX-1)
		     {
		       printf("%d",queue[i]);
		       i=0;
		       for(i=0;i<rear;i++)
		       {
		       printf("%d",queue[i]);
		       }
		     }
		      if(front>rear)
		     {
			for(i=front;i<MAX;i++)
		       {
		       printf("%d",queue[i]);
		      }

		       }

		       }
