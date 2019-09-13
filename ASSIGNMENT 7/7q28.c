//ASSIGNMENT 7 ANS28
//BY AYUSH SAHU
#include<stdio.h>
#include <math.h>
int main()
{
int k,x,n,d,a,b,s1=0,s2=0,S1,S2;

printf("enter no of complex nos");
scanf("%d",&n);
x=1;
while(x<=n)
{
printf("enter complex");
scanf("%d%di",&a,&b);
s1=s1+a;
s2=s2+b;
x++;
}

printf("SUM OF COMPLEX NOS IS=%d %di",s1,s2);
return 0;
}