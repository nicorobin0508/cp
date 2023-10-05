#include<stdio.h>
#include<conio.h>
int size, val;
void disp(int size);
void sort(int size);
void reverse(int size);
void search(int val,int size);
int arr[20];
int rev[20];
int main()
{
int i,ch;
clrscr();
printf("enter the size of array");
scanf("%d",&size);
printf("\n enter the element");
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
do
{
printf("\n***main menu***\n");
printf("1.display\n");
printf("2.sorting\n");
printf("3.reverse\n");
printf("4.search\n");
printf("5.exit\n");
printf("enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:disp(size);break;
case 2:sort(size); break;
case 3:reverse(size);break;
case 4:printf("enter value to e search:");
scanf("%d",&val);
search(val,size);
break;
case 5:exit(0);
}
}
while (ch!=5);
getch();
return 0;
}
void search(int val,int size)
{
int i;
for(i=0;i<size;i++)
{
if(arr[i]==val)
{
printf("value is found at %d position",i);
break;
}
}
if(i==size)
{
printf("value is not found");
}
}
void disp(int size)
{
int i;
printf("given array\n");
for(i=0;i<size;i++)
{
printf("%d\n",arr[i]);
}
}
void sort(int size)
{
int i,j;
for(i=0;i<size;i++)
{
for(j=0;j<size-1-i;j++)
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
for (i=0;i<size;i++)
{
printf("%d\n",arr[i]);
}
}
void reverse(size)
{
int i=0,j=0;
for(i=size-1;i>=0;i--)
{
rev[j]=arr[i];
j++;
}
printf("reverse order:\n");
for(i=0;i<size;i++)
{
printf("%d\n",rev[i]);
}
}
