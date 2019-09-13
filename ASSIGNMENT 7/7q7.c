//ASSIGNMENT 7 ANS7
//BY AYUSH SAHU
#include<stdio.h>
#include <math.h>
int main()
{
float a,b,c,d,e,f,A,B,C;
printf("enter the  vectorss");
scanf("%fi%fj%fk%fi%fj%fk",&a,&b,&c,&d,&e,&f);
A=b*f-c*e;
B=c*d-a*f;
C=a*e-b*d;
printf("dot product is=%fi%fj%fk",A,B,C);


return 0;
}