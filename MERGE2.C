#include<stdio.h>
#include<conio.h>
void main()
{
  int a1[20],a2[20],a3[20],m,n,i,j,k=0,temp;
  clrscr();
  printf("\nEnter number of elements in first array:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
     scanf("%d",&a1[i]);
  }
  printf("\nEnter number of elements in second array:");
  scanf("%d",&m);
  for(i=0;i<m;i++)
  {
    scanf("%d",&a2[i]);
  }
  i=0;
  j=0;

  while(i<n && j<m)
  {
     if(a1[i]<a2[j])
     {
	a3[k]=a1[i];
	i++;
	k++;
     }
     else
     {

     a3[k]=a2[j];
     k++;
     j++;
   }

}


   while(i<n)
   {
     a3[k]=a1[i];
     i++;
     k++;

}
   while(j<m)
   {
     a3[k]=a2[j];
     k++;
     j++;
   }
 printf("\nThe merged array:\n");
for(i=0;i<n+m;i++)
{
 printf("\n%d",a3[i]);
}
for(i=0;i<n+m-1;i++)
{
 for(j=i+1;j<n+m;j++)
 {
  if(a3[j]<a3[i])
  {
    temp=a3[i];
    a3[i]=a3[j];
    a3[j]=temp;
   }
  }
  }
  printf("\nsorted merged array is:");
  for(i=0;i<n+m;i++)
  {
    printf("\n %d",a3[i]);
  }
getch();
}

