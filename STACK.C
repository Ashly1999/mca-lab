#include<stdio.h>
#include<conio.h>

   int stack[100],top,n,i,x,choice;
   void push(void);
   void pop(void);
   void display(void);

   int main()
   {
      clrscr();
      top=-1;
      printf("Ener the size of stack:");
      scanf("%d",&n);
      printf("\n\t\t\t***STACK OPERATION***");

	printf("\n\t1.push\n\t2.pop\n\t3.display\n\t4.Exit");
	 do
	 {
	 printf("\nEnter your choice:");
	 scanf("%d",&choice);
	 switch(choice)
	 {
	    case 1:
	    {
		 push();
		 break;
	     }
	    case 2:
	    {
		pop();
		break;
	     }
	    case 3:
	    {
		 display();
		 break;
	     }
	    case 4:
	    {
		 printf("\n\t exit point");
		 break;
	     }

	   default:
	   {
	       printf("\n\t Enter a valid chioce");
	  }
      }
      }

       while(choice!=4);

       return(0);
  }

  void push()
  {
       if(top>=n-1)
       {
	  printf("\n\tstack is overflow");
	}
	  else
	 {
	  printf("\nEnter a value to be pushed:");
	  scanf("%d",&x);
	  top++;
	  stack[top]=x;

	}
   }
   void pop()
   {
     if(top<=-1)
     {
       printf("\n underflow");
     }
       else
       {
	  printf("\n\t The poped element is: %d",stack[top]);

	 top--;
	 }
	 }

   void display()
   {
     if(top>=0)
     {
       printf("\n The elements in stack: \n");
       for(i=top;i>=0;i--)

	printf("\n%d",stack[i]);
	printf("\n press next choice");
      }
      else
      {
	printf("\n stack is empty");
      }
       }








