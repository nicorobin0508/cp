#include<stdio.h>
#include<conio.h>
int main()
{
int s1,s2,s3,i,j,k=0;
int arr1[20],arr2[20],arr3[40];
clrscr();
printf("\n enter the size of 1st array ");
scanf("%d",&s1);
printf("\n enter the size of 2st array ");
scanf("%d",&s2);
s3=s1+s2;
printf("\n enter the elements of 1st array");
for(i=0;i<s1;i++)
{
scanf("%d",&arr1[i]);
arr3[i]=arr1[i];
}
k=s1;
printf("\n enter the size of 2nd array\n");
for(i=0;i<s2;i++)
{
scanf("%d",&arr2[i]);
arr3[k]=arr2[i];
k++;
}
printf("\n the merged array before sorting:\n\t");
for(i=0;i<s3;i++)
printf("%d",arr3[i]);
printf("\n the merged array after sorting:\n\t");
for(i=0;i<s3;i++)
{
int temp;
for(j=i+1;j<s3;j++)
{
if(arr3[i]>arr3[j])
{
temp=arr3[i];
arr3[i]=arr3[j];
arr3[j]=temp;
}
}
}
for(i=0;i<s3;i++)
{
printf("%d",arr3[i]);
}
getch();
}
