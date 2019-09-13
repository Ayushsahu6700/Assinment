//ASSIGNMENT 2 ANS3
//BY AYUSH SAHU
#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,d,e,f,A,B,C,S,AREA;
printf("enter the 1st co ordinates");
scanf("%f%f",&a,&b);
printf("/nenter thr 2nd coordinate");
scanf("%f%f",&c,&d);
printf("enter the 3rd co ordinate");
scanf("%f%f",&e,&f);
A=sqrt((b-d)*(b-d) + (a-c)*(a-c));
B=sqrt((d-f)*(d-f) + (c-e)*(c-e));
C=sqrt((f-b)*(f-b) + (e-a)*(e-a));
S=(A+B+C)/2;
AREA=sqrt((S)*(S-A)*(S-B)*(S-C));

printf("AREA OF TRIANGLE=%f",AREA);

return 0;
}