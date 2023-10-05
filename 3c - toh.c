#include<stdio.h>
#include<conio.h>
void towers(int,char,char,char);
int main()
{
int num; 
clrscr();
printf("enter the number of disk:");
scanf("%d",&num);
printf("the sequence of moves involved in the tower of hanoi:\n");
towers(num,'A','C','B');
getch();
return 0;
}
void towers(int num,char from_rod,char to_rod, char aux_rod)
{
if(num==1)
{
printf("\n Move disk 1 from rod %c to rod %c", from_rod,to_rod);
return;
}
towers(num-1,from_rod,aux_rod,to_rod);
printf("\n Move disk %d from rod %c to rod %c",num, from_rod,to_rod);
towers(num-1,aux_rod,to_rod,from_rod);
}
