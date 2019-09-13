//ASSIGNMENT 3 ANS5
//BY AYUSH SAHU
#include<stdio.h>
#include<math.h>
int main()
   {
      float a,b,c,m;
   printf("enter three numbers ");
scanf("%f%f%f",&a,&b,&c);
m=-a/b;
printf("slope of line is=%f",m);
if(b==0)
printf("line is vertical");
else 
printf("line is not vertical");
return 0;
}
