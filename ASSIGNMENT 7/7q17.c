//ASSIGNMENT 7 ANS17
//BY AYUSH SAHU
#include<stdio.h>
#include <math.h>
int main()
{
int n,sum=0,i,j,k;
printf("enter hoe many nos you want to add\n");
scanf("%d",&n);
for(k=1;k<=n;k++)
{
printf(";");
}
for(i=1;i<=n;i++)
{
printf("enter no");
scanf("%d,",&j);
sum=sum+j;
}
printf("sum=%d",sum);


return 0;
}