
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
	typedef struct node
	{
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
		       node *ptr,*temp;
		       ptr=(node*)malloc(sizeof(node));
		       ptr->info=ele;
		       ptr->next=NULL;
			if(head==NULL)
			{
			head=ptr;
			ptr->next=head;

			}
				else
				{
		    temp=head;
		    while(temp->next!=head)

		    {

		    temp=temp->next;


		    }
		    temp->next=ptr;
		    ptr->next=head;
		    head=ptr;
				}
	      return head;
		}

		node* insert_at_end(node *head ,int ele)
		{
		  node *ptr,*temp;
		  ptr=(node*)malloc(sizeof(node));
		  ptr->info=ele;
		  ptr->next=NULL;
		     if(head==NULL)
		     {
		     head=ptr;
		     ptr->next=head;
		     }
		     else
		     {
		     temp=head;
			while(temp->next!=head)
			{
			temp=temp->next;
			break;
			}
			temp->next=ptr;
	    ptr->next=head;
		    }
		    return head;
	 }

	node* insert_after_ele(node *head ,int ele)
	{
	       node	*ptr,*loc=NULL,*temp;
	       int item;
	       printf("\nenter the item to search");
	       scanf("%d",&item);
	       ptr=(node*)malloc(sizeof(node));
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

		   }while(temp!=head);
		   if(loc==NULL)
		   {
			printf("element not found");
		    }
			else
			{
			ptr->next=loc->next;
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
					temp->next=head;
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
			else if(head->next==head)
			{
				head=NULL;
				free(head);
			  }
			  else
			  {
			   temp=head;
			    while(temp->next!=head)
			    {
			    ptemp=temp;
			    temp=temp->next;
			    break;
			    }
			  ptemp->next=head;
			  free(temp);
		       }
		       return head;
		       }
	node* dele_at_beg(node *head)
	{
	node *temp,*ptr;
		if(head==NULL)
		{
		printf("under flow condition");
		}
		else if(head->next==head)

		{
			temp=head;
			head=NULL;
			    free(temp);
		}
	    else{
		temp=head;
		while(temp->next!=head)
		    {
			temp=temp->next;
			break;
		    }
	    temp->next=head->next;
	    ptr=head;
	     free(ptr);
	    head=temp;
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
	      //	printf("enter the item");
	       //	scanf("%d",&item);
		if(temp==NULL)
		{
			printf("under flow condition");
		  }
  else if(temp->next==head)
	  {
		if(temp->info!=ele)
			{
			  printf("dele not possible, no such element exist");
			}
		   }

		     else
		     {
			      do
				{
				if(temp->info==ele)
					{
					loc=temp;
					break;
					 }
				       ptemp=temp;
				       temp=temp->next;
				  } while(temp!=head);
				   if(loc==NULL)
				   {
				   printf("element not found");
				   }
				   else
				   {    ptemp->next=loc->next;
					free(loc);
				     }
			      }
		      return head;
		      }

	void traverse_in_order(node *head)
	{
	node *temp;
	temp=head;
	do
		{
		printf("%d",temp->info);
		temp=temp->next;
	}while(temp!=head);
	}
	void traverse_in_rev(node *head1)
	{
	  node *temp;
	  temp=head1;
	  if(temp->next!=head)

	   traverse_in_rev(temp->next);
	   printf("%d",temp->info);

       }

       void count(node *head)
       {
	  node *temp;
	  int c=0;
	  temp=head;
	  do
	  {
	   c=c+1;
	   temp=temp->next;
	   }while(temp!=head);
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
	  ptemp=temp;
	  temp=temp->next;
	  }
	  ptemp->next=temp->next;
	  free(temp);
     return head;
     }
