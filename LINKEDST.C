#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void push();
void pop();
void display();
struct node
{
  int data;
   struct node*next;
};

struct node *head=NULL;
void main()
{
  int ch=0;
  do
  {
    printf("\n!!Linked Stack Operations!!\n");
    printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
    printf("\nEnter your choice? \n");
    scanf("%d",&ch);
    switch(ch)
    {
       case 1:
	    push();
	    break;
      case 2:
	   pop();
	   break;
      case 3:
	   display();
	   break;
    case 4:
	  exit(0);
   default:
      printf("\nInvalid choice\n");
	break;
  }
 }while(ch!=4);
}

void push()
{
  int item;
  struct node*ptr;
  ptr=(struct node*)malloc(sizeof(struct node));
  if(ptr==NULL)
  {
    printf("\nOverflow condition\n");
 }
 else
 {
   printf("\nEnter the values:\n");
   scanf("%d",&item);
   if(head==NULL)
   {


     ptr->data=item;
     ptr->next=NULL;
     head=ptr;
  }
  else
  {
    ptr->data=item;
    ptr->next=head;
    head=ptr;
  }
  printf("\n\nitem is pushed");
}
}

void pop()
{
  struct node*ptr;
  if(head==NULL)
  {
     printf("\nUnderflow condition\n");
  }
  else
  {
     ptr=head;
     head=ptr->next;
     free(ptr);
     printf("\nItem is poped:\n");
  }
}

void display()
{
   struct node*ptr;
   ptr=head;
   if(ptr==NULL)
   {
      printf("\nEmpty stack\n");
   }
   else
   {
      printf("\nprinting values...\n");
      while(ptr!=NULL)
      {
	 printf("\n%d\n",ptr->data);


	 ptr=ptr->next;
    }
  }
}



























