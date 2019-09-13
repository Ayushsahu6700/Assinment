//ASSIGNMENT 2 ANS2
//BY AYUSH SAHU
#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,d,distance;
printf("enter the 1st co ordinates");
scanf("%f%f",&a,&b);
printf("/nenter thr 2nd coordinate");
scanf("%f%f",&c,&d);

distance=sqrt((b-d)*(b-d) + (a-c)*(a-c));

printf("distance=%f",distance);

return 0;
}