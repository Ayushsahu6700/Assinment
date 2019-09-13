//ASSIGNMENT 1 ans9
//BY AYUSH SAHU
#include<stdio.h>
#include<math.h>
int main()
{
int num,l1,l2,ans;
printf("enter the number");
scanf("%d",&num);
l1=num%10;
l2 =num/100;
ans=(l2*10)+l1;
printf("required sum=%d",ans);
return 0;
}
