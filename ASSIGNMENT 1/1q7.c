//ASSIGNMENT 1 ans7
//BY AYUSH SAHU
#include<stdio.h>
#include<math.h>
int main()
{
int num,l1,l2,x,sum;
printf("enter the number");
scanf("%d",&num);
l1=num%10;
x =num%100;
l2=x/10;
sum=l1+l2;
printf("required sum=%d",sum);
return 0;
}
