#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
//#define MAX 50;
int s[50],ele;

int top=-1;
void push(int ele){
	s[++top]=ele;
	}

		int pop()
		{
		return(s[top--]);
		}
void main()
{
char pos[50],*ch;
int i=0,val1=0,val2=0,j=0;
clrscr();
	printf("read the post fix expression");
		//scanf("%s",pos);
		gets(pos);
		puts(pos);


		while(pos[i]!='\0')
		 {
			*ch=pos[i];
			i=i+1;
			if(isdigit(*ch))
			{
			j=atoi(ch);
			printf("%d",j);
			push(j);
				}
			else
			{
				val2=pop();
				val1=pop();
			       printf("%d%d",val2,val1);
			switch(*ch)
			{
				case '+':
				push(val1+val2);
				break;
				case '-':
				push(val1-val2);
				break;
				case '*':
				push(val1*val2);
				break;
				case '/':
				push(val1/val2);
				break;
			       /*	default:
				printf(" invalid choice ");
				exit(0);*/

				}
			}
		}
printf("\ngiven postfix exp:%s\n",pos);

printf("\nresult after evalution:%d\n",s[top]);
getch();
}
