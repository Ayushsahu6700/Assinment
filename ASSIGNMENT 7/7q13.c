//ASSIGNMENT 7 ANS13
//BY AYUSH SAHU
#include<stdio.h>
#include <math.h>
int main()
{
int a,b,c;
printf("enter the vector");
scanf("%di%dj%dk",&a,&b,&c);
if(a>0&&b>0&&c>0)
printf("vector is=%di+%dj+%dk",a,b,c);
else if(b==0&&c<0)
printf("vector is=%di%dk",a,c);
else if(b==1&&c<0)
printf("vector is=%di+i%d",a,c);


return 0;
}