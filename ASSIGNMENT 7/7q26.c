//ASSIGNMENT 7 ANS26
//BY AYUSH SAHU
#include<stdio.h>
#include <math.h>
int main()
{
int k,x,f1,d;

printf("enter two no");
scanf("%d%d",&k,&x);
f1=x;
while(f1>=pow(10,k))
{
f1=f1/10;
}
d=f1%10;
printf("kth digit of x is=%d",d);
return 0;
}