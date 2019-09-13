//ASSIGNMENT 7 ANS24
//BY AYUSH SAHU
#include<stdio.h>
#include <math.h>
int main()
{
int n,fourth;

printf("enter the no");
scanf("%d",&n);
fourth=n;
while(fourth>=10000)
{
fourth=fourth/10;
}
fourth=fourth%10;

printf("forth digit  is=%d",fourth);
return 0;
}