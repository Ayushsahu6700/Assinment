//ASSIGNMENT 2 ANS4
//BY AYUSH SAHU
#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,x1=1,x2=2,y1,y2,slope;
printf("enter values of a,b,c");
scanf("%f%f%f",&a,&b,&c);
y1=(-c-a*x1)/b;
y2=(-c-a*x2)/b;
slope=(y2-y1)/(x2-x1);
printf("slope of line ax + by+ c is=%f",slope);

return 0;
}