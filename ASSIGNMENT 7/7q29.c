//ASSIGNMENT 7 ANS29
//BY AYUSH SAHU
#include<stdio.h>
#include <math.h>
int main()
{
int x,s1=0,s2=0,a ,d,n;

printf("enter no of  nos");
scanf("%d",&n);
x=1;
while(x<=n)
{
printf("enter no ");
scanf("%d",&a);
s1=s1+a*a*a;
s2=s2+2*a*2*a*2*a;
x++;
}
d=s1+s2;
printf("SUM OF  NOS IS= %d",d);
return 0;
}