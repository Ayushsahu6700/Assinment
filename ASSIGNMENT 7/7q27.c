//ASSIGNMENT 7 ANS27
//BY AYUSH SAHU
#include<stdio.h>
#include <math.h>
int main()
{
int k,x,f1,d;

printf("enter no");
scanf("%d",&x);
f1=x;
while(f1%2==0)
{
f1=f1/10;
}
d=f1%10;
printf("kth digit of x is=%d",d);
return 0;
}