//ASSIGNMENT 1 ans10
//BY AYUSH SAHU
#include<stdio.h>
#include<math.h>
int main()
{
int num,l1,l2,x,y,ans;
printf("enter the number");
scanf("%d",&num);
l1=num%10;
x =num%100;
l2=x/10;
y=num/100;
ans=(y*100)+(l1*10)+l2;
printf("required sum=%d",ans);
return 0;
}
