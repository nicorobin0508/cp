#include<stdio.h>
#include<conio.h>
#include<malloc.h>
int selection_sort(int n);
int A [20];
int selection_sort(int n0
{
   int imin,i,j,temp;
   for(i=0;i<n;i++)
   {
       imin=1;
       for(j=i+1;j<n;j++)
       {
           if(A [imin]> A [j])
           {
               imin=j;
           }
         }
         temp=A[i];
         A[i]=A[imin];
         A[imin]=temp;
      }
      temp=A[i];
      A[i]=A[imin];
      A[imin]=temp;
   }
   printf("successfully sorted using selection sort:");
}
int main()
{
   int n,i;
   clrscr();
   printf("enter the size:");
   scanf("%d",&n);
   printf("enter the elements:");
   for(i=0;i<n;i++)
   {
      scanf("%d",&A[i]);
      printf("\n");
   }
   selection_sort(n);
   for(i=0;i<n;i++)
   {
      printf("\n%d",A[i]);
   }
   getch();
   return 0;
}
