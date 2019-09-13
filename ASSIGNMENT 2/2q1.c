//ASSIGNMENT 2 ANS1
//BY AYUSH SAHU
#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c, area,s;
printf("sides of triangle");
scanf("%f%f%f",&a,&b,&c);
s=(a+b+c)/2;
area= sqrt(s*(s-a)*(s-b)*(s-c));
printf("area of triangle=%f",area);

return 0;
}