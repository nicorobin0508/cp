#include<stdio.h>
#include<conio.h>
int main()
{
int c,first,last,middle,n,search,array[20];
clrscr();
printf("enter the size:\n");
scanf("%d",&n);
printf("enter the elemenets\n");
for(c=0;c<n;c++)
scanf("%d",&array[c]);
printf("enter the value to be search\n");
scanf("%d",&search);
first=0;
last=n-1;
middle=(first+last)/2;
while(first<=last)
{
if(array[middle]<search)
first=middle+1;
else if(array[middle]==search)
{
printf("\n the number %d found at location %d\n",search,middle+1);
break;
}
else
last=middle-1;
middle=(first+last)/2;
}
if(first>last)
printf("\n the number %d is not found in the given array,",search);
getch();
return 0;
}
