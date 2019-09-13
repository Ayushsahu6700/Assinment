//ASSIGNMENT 1 ans8
//BY AYUSH SAHU
#include<stdio.h>
#include<math.h>
int main()
{
int num,l1,l2,x,ans;
printf("enter the number");
scanf("%d",&num);
l1=num/10;
x =num%10;
ans=(l1*10)+2*x;
printf("required sum=%d",ans);
return 0;
}
