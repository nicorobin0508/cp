#include<stdio.h>
#include<conio.h>
int a[10];
void insertion_sort(int n)
{
int val,vacant,i;
for(i=1;i<n;i++)
{
val=a[i];
vacant=i;
while(a[vacant-1]>val &&vacant !=0)
{
a[vacant]=a[vacant-1];
vacant=vacant-1;
}
a[vacant]=val;
}
printf("successfully sorted using insertion algorithm:\n");
}
void main()
{
int n,i;
clrscr();
printf("enter the size of array:");
scanf("%d",&n);
printf("enter the elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
printf("\n");
}
insertion_sort(n);
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
getch();
}
