#include<stdio.h>
#include<conio.h>
int size,val;
void disp(int size);
void search(int val,int size);
int arr[20];
int main()
{
int i,ch;
clrscr();
printf("enter the size of array:");
scanf("%d",&size);
printf("\n enter the element");
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
search(val,size);
getch();
return 0;
}
void search(int val,int size)
{
int i;
printf("\n enter the value for search");
scanf("%d",&val);
for(i=0;i<size;i++)
{
if(arr[i]==val)
{
printf("\n valueis found at %d position ",i+1);
break;
}
}
if(i==size)
{
printf("value is not found");
}
}
