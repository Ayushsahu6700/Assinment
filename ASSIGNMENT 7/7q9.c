//ASSIGNMENT 7 ANS9
//BY AYUSH SAHU
#include<stdio.h>
#include <math.h>
int main()
{
float a,b,c,d,e,f,g,h;
printf("enter the complex numbers");
scanf("%f%fi%f%fi",&a,&b,&c,&d);
e=a*c-b*d;
f=a*d+b*c;
g=(a*c+b*d)/(c*c+d*d);
h=(b*c-a*d)/(c*c+d*d);
printf("multiplication is=%f %fi\n",e,f);
printf("division is=%f %fi",g,h);



return 0;
}