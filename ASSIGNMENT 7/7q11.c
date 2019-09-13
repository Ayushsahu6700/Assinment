//ASSIGNMENT 7 ANS11
//BY AYUSH SAHU
#include<stdio.h>
#include <math.h>
int main()
{
float a,b,c,d,x,y1,y2,x1,x2;
printf("enter the quad equation");
scanf("%fx*x%fx%f",&a,&b,&c);
d=(b*b)-(4*a*c);
if(d<0)
{
x=-b/(2*a);
y1=-(sqrt(-d))/(2*a);
y2=(sqrt(-d))/(2*a);
printf("complex roots are=%f% fi,%f %fi",x,y1,x,y2);
}
else
{
x1=(-b+sqrt(d))/2*a;
x2=(-b-sqrt(d))/2*a;
printf("real eroots are=%f%f",x1,x2);
}
return 0;
}