//ASSIGNMENT 7 ANS12
//BY AYUSH SAHU
#include<stdio.h>
#include <math.h>
int main()
{
int a,b;
printf("enter the complex number");
scanf("%d%di",&a,&b);
if(b>0)
printf("complex no is=%d+%di",a,b);
else if(b>0&&a==0)
printf("complex no is=%di",b);
else if(b<0)
printf("complex no is=%d%di",a,b);
else if(b<0&&a==0)
printf("complex no is=%di",b);
else if(b==0)
printf("complex no is=%d",a);
else if(a==0)
printf("complex no is=%d",b);

return 0;
}