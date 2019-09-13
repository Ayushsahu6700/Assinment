//ASSIGNMENT 7 ANS25
//BY AYUSH SAHU
#include<stdio.h>
#include <math.h>
int main()
{
int n,m,f1,f2,d;

printf("enter two no");
scanf("%d%d",&n,&m);
f1=n;
while(f1>=10)
{
f1=f1/10;
}
f2=m;
while(f2>=10)
{
f2=f2/10;
}
d=f1*f2;
printf("product is=%d",d);
return 0;
}