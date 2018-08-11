#include<stdio.h>
#include<conio.h>
#define MAX 10
void push(int);
int pop();
int  peek();
void display();
int p,i;
int arr[MAX],top=-1,op,choice,ele;
void main()

    {
clrscr();
do
{
	    printf("enter the choice:");
	    printf("\n press 1 to PUSH,\n press 2 to POP,\npress 3 to PEEK,\n press 4 to display");
	    scanf("%d",&op);


		switch(op)
		{
		case 1:
			printf("enter the element");
			scanf("%d",&ele);
		       push(ele);

			break;
		case 2:
			ele=pop();

			break;
		case 3:
		    ele=   peek();
			break;
		case 4:
			display();
			break;
		default:
		    printf("enter the valid num");

		    }
		    printf("press 1 to continue ");
		    scanf("%d",&choice);
		}while(choice==1);
       getch();
    }
	void push(int ele)
	{
	    if(top==MAX-1)
	    {
	    printf("stack is full");
	    }
	    else
	    {

	    top=top+1;
	    arr[top]=ele;
		}

	}
	int pop ( )
	{

		if(top==-1)
			{
		printf("under flow con");
		return -1;
	    }
		     else
		     {
	    ele=arr[top];
	    top=top-1;
	    return ele;
	    }
	}
	int peek()
	    {

	    if(top==NULL)
	  {

	    printf("\nstack is empty");
	    return -1;
	  }
	    else{
		return arr[top];
		}
	    }

	 void display()
	 {
		if(top==-1)
		{
		printf("stack is empty");
		}
		else
		{
		for(i=top;i>=0;i--)
		{
		printf("\n %d\n ",arr[i]);
		}
	     }
	 }
