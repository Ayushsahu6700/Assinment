//ASSIGNMENT 7 ANS6
//BY AYUSH SAHU
#include<stdio.h>
#include <math.h>
int main()
{
float a,b,c,d;
printf("enter the  vectorss");
scanf("%fi%fj%fk",&a,&b,&c);
d=sqrt(a*a+b*b+c*c);
a=a/d;
b=b/d;
c=c/d;
printf("unit vector is=%fi %fj %fk",a,b,c);
return 0;
}