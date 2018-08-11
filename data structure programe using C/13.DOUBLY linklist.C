#include<stdio.h>
#include<conio.h>
#include<alloc.h>
	typedef struct node
	{
	struct node *prev;
	int info;
	struct node *next;
	}node;
	node * insert_at_beg(node* ,int);
	node * insert_at_end(node* ,int);
	node * insert_after_ele(node* ,int);
	node * insert_at_specif(node* ,int);
	node * dele_at_end(node*);
	node * dele_at_beg(node*);
	node * dele_after(node*);
	node * dele_specif(node*,int);
	node * dele_ele_from_specif(node*,int);
	void traverse_in_order(node*);
	void traverse_in_rev(node*);
	void count(node*);
	node *head=NULL;
		void main()
		{
		int ch,ele;
		char c='y';
		clrscr();
		do
		{
		printf("ente your choice");
		printf("\npress 1 to insert at beg,\npress 2 to insert at end,\n press 3 to insert after ele,\npress 4 to  insert at specific position,\n press 5 to dele at end,\npress 6 to dele at beg,\n press 7 to dele after ele,\n press 8 to dele specific element,\n press 9 to dele  ele from specific pos,\npress 10 for traverse,\n press 11 for traverse in reverse,\n press 12 to count the node ");
		scanf("%d",&ch);

			switch(ch)
			{


			case 1:
					printf("\nelement to insert");
					scanf("%d",&ele);
				   head= insert_at_beg(head,  ele);
					traverse_in_order(head);
					break;
			case 2:
				printf("\nelement to insert");
				scanf("%d",&ele);
			     head= insert_at_end(head, ele);
			     traverse_in_order(head);
			     break;
			 case 3:

			       printf("\nelement to insert");
				scanf("%d",&ele);
			     head=  insert_after_ele(head, ele);
				 traverse_in_order(head);
				  break;
			 case 4:
				  printf("\nelement to insert");
				scanf("%d",&ele);
			       head=	insert_at_specif(head ,ele);
				traverse_in_order(head);
				break;
			case 5:
				// printf("\nelement to insert");
			       //	scanf("ele is=%d",&ele);
			      head= dele_at_end(head);
				traverse_in_order(head);
				break;
			case 6:
			       head= dele_at_beg(head);
			       traverse_in_order(head);
			       break;
			case 7:
				head=dele_after(head);
				traverse_in_order(head);
				break;
			case 8:


			    printf("\nenter specific ele to dele");
			       scanf("%d",&ele);
				head= dele_specif(head,ele);
				traverse_in_order(head);
				break;
			case 9:
			    printf("\n enter the specific position");
			    scanf("%d",&ele);
			head= dele_ele_from_specif(head ,ele);
			 traverse_in_order(head);
			 break;
			case 10:

				 traverse_in_order(head);
				break;
			 case 11:
				traverse_in_rev(head);
			       break;
			 case 12:
			      count(head);
			      break;
			  default :

			   printf("\n enter valid num");
		      }
		      printf("\nfor continu press y");
		      c=getche();
		      }while(c=='y');
		       getch();

		       }

		       node * insert_at_beg(node *head,int  ele)
		       {
		       node *ptr;
		       ptr=(node*)malloc(sizeof(node));
		       ptr->prev=NULL;
		       ptr->info=ele;
		       ptr->next=NULL;
			if(head==NULL)
			{
			head=ptr;
			}
				else
				{
				ptr->next=head;
				head->prev=ptr;
				head=ptr;
				}
		return head;
		}

		node* insert_at_end(node *head ,int ele)
		{
		  node *ptr,*temp;
		  ptr=(node*)malloc(sizeof(node));
		  ptr->prev=NULL;
		  ptr->info=ele;
		  ptr->next=NULL;
		     if(head==NULL)
		     {
		     head=ptr;
		     }
		     else
		     {
		     temp=head;
			while(temp->next!=NULL)
			{
			temp=temp->next;
			}
			temp->next=ptr;
	     ptr->prev=temp;
		    }
		    return head;
	 }

	node* insert_after_ele(node *head ,int ele)
	{
	       node   *ptr,*loc=NULL,*temp;
	       int item;
	       printf("\nenter the item to search");
	       scanf("%d",&item);
	       ptr=(node*)malloc(sizeof(node));
	       ptr->prev=NULL;
	       ptr->info=ele;
	       ptr->next=NULL;
	       temp=head;
		do
		{
			if(temp->info==item)
			{
			 loc=temp;
			 break;
			}
			temp=temp->next;
		   }while(temp!=NULL);
		   if(loc==NULL)
		   {
			printf("element not found");
		    }

	else if(loc->next==NULL)
	{
	  loc->next=ptr;
	  ptr->prev=loc;
	}
			else
			{
			ptr->next=loc->next;
			ptr->prev=loc;
			ptr->next->prev=ptr;
			loc->next=ptr;
			}


	    return head;
	}

	node* insert_at_specif(node *head ,int ele)
	{
		node *ptr,*temp=head,*prev;
		int pos;
		printf("enter the pos");
		scanf("%d",&pos);
		  ptr=(node*)malloc(sizeof(node));
		  ptr->info=ele;
			      if(pos==0)
			      {
				ptr->next=head;
				head=ptr;
				return head;
			      }
			    else
			    {
				while(pos--)
				{
					prev=temp;
					temp=temp->next;
					}
					prev->next=ptr;
					ptr->next=temp;

					return head;
			   }

		      }
		node* dele_at_end(node *head)
		{
		  node *temp,*ptemp;
		  if(head==NULL)
		  {
			printf("under flow condition");
			}
			else if(head->next==NULL)
			{
				temp=head;
				head=NULL;
				free(head);
			  }
			  else
			  {
			   temp=head;
			    while(temp->next!=NULL)
			    {

			    temp=temp->next;
			    }
			  temp->prev->next=NULL;
			  free(temp);
		       }
		       return head;
		       }
	node* dele_at_beg(node *head)
	{
	node *temp;
		if(head==NULL)
		{
		printf("under flow condition");
		}
		else if(head->next==NULL)
	{
	    temp=head;
	    head=head->next;
	    head->prev=NULL;
	    free(temp);
	}
	else
		{
			temp=head;
			head=head->next;
			head->prev=NULL;
			free(temp);

			}
	    return head;
	      }

	node* dele_after(node *head)
	{
	node *ptr,*preptr;
	int val;
	printf("\nenter value after which node has to dele");
	scanf("%d",&val);
	ptr=head;
	while(preptr->info!=val)
	{
		preptr=ptr;
		ptr=ptr->next;
	  }
	  preptr->next=ptr->next;

	  free(ptr);
	  return head;
	  }
	node* dele_specif(node *head,int ele)
	{
	node *temp,*ptemp,*loc=NULL,*ptr;

		temp=head;
		if(temp==NULL)
		{
			printf("under flow condition");
		  }
		     else
		     {
			while(temp!=NULL)
				{
				if(temp->info==ele)
					{
					loc=temp;
					break;
					 }
					 temp=temp->next;
				 }
				     loc->prev->next=loc->next;
				     loc->next->prev=loc->prev;
					free(loc);

			      }
		      return head;
		      }

	void traverse_in_order(node *head)
	{
	node *temp;
	temp=head;
	while(temp!=NULL)
		{
		printf("%d",temp->info);
		temp=temp->next;
		}
	}
	void traverse_in_rev(node *head)
	{
	  node *temp;
	  temp=head;
	  if(temp!=NULL)
	  {
	   traverse_in_rev(temp->next);
	   printf("%d",temp->info);
	 }
       }

       void count(node *head)
       {
	  node *temp;
	  int c=0;
	  temp=head;
	  while(temp!=NULL)
	  {
	   c=c+1;
	   temp=temp->next;
	   }
	   printf("length of link listis=%d",c);

       }
       node *    dele_ele_from_specif( node *head ,int ele)
       {
	  int c=1;
	  node *temp,*ptemp;
	  temp=head;
	  while(c!=ele)
	  {
	  c++;

	  //ptemp=temp;
	  temp=temp->next;
	  }
	  if(temp==NULL)
	  {
		printf("deletion not possible");
		}
	  if(temp->prev==NULL)
		{
		temp=temp->next;
		temp->prev=NULL;
		head=temp;
		}
	  else if(temp->next==NULL)
	    {
	    temp->prev->next=NULL;
	    }
	    else
	    {
	  temp->prev->next=temp->next;
	  temp->next->prev=temp->prev;
	   }
	  free(temp);
     return head;
     }
