//ASSIGNMENT 7 ANS10
//BY AYUSH SAHU
#include<stdio.h>
#include <math.h>
int main()
{
float a,b,c,x1,y1;
printf("enter the equation of line");
scanf("%fx%fy%f",&a,&b,&c);
y1=0;
x1=-c/a;
printf("intersection with x axis is=(%f,%f)",x1,y1);


return 0;
}