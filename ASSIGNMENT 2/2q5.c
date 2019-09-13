//ASSIGNMENT 2 ANS5
//BY AYUSH SAHU
#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,d,e,dist;
printf("enter values of a,b,c,d,e");
scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
dist=(a*c+b*d+e)/(sqrt(c*c+d*d));
printf("distance is=%f",dist);

return 0;
}