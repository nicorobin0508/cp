#include<stdio.h>
#include<conio.h>
int size,val;
void disp(int size);
int bubblesort(int size);
int arr[20];
int main()
{
   int i,ch;
   clrscr();
   printf("enter the size of the array:");
   scanf("%d",&size);
   printf("\n enter the elements:");
   for(i=0;i<size;i++)
   {
      scanf("%d",&arr[i]);
   }
   printf("given array:\n");
   for(i=0;i<size;i++)
   {
      printf("%d\n",arr[i]);
   }
   bubblesort(size);
   getch();
   return 0;
}
int bubblesort(size)
{
   int i,j;
   for(i=0;i<size;i++)
   {
      for(j=0;j<size-i-1;j++)
      {
	 if(arr[j]>arr[j+1])
	 {
	     int temp;
	     temp=arr[j];
	     arr[j]=arr[j+1];
	     arr[j+1]=temp;
	 }
      }
   }
   printf("sorted array:\n");
   for(i=0;i<size;i++)
   {
      printf("%d\n",arr[i]);
   }
}
