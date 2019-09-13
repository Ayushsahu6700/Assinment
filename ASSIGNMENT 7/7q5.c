//ASSIGNMENT 7 ANS5
//BY AYUSH SAHU
#include<stdio.h>
#include <math.h>
int main()
{
float a,b,c,d,e,f,dot;
printf("enter the two vectors");
scanf("%fi%fj%fk%fi%fj%fk",&a,&b,&c,&d,&e,&f);

dot=a*d+b*e+c*f;
printf("%f",dot);
return 0;
}