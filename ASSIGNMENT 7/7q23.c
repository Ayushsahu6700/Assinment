//ASSIGNMENT 7 ANS23
//BY AYUSH SAHU
#include<stdio.h>
#include <math.h>
int main()
{
int t1,t2,d,n,second,first;

printf("enter the no");
scanf("%d",&n);
second=n;first=n;
while(second>=100)
{
second=second/10;
}

while(first>=10)
{
first=first/10;
}
d=second-first*10;
printf("secomd digit  is=%d",d);
return 0;
}