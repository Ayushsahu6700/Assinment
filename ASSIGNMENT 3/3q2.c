//ASSIGNMENT 3 ANS2
//BY AYUSH SAHU
#include<stdio.h>
#include<math.h>
int main()
   {
      float a,b,c,d;
   printf("enter four numbers");
scanf("%f%f%f%f",&a,&b,&c,&d);
if(a>b&&a>c&&a>d)
printf("a is gretest");
else if(b>a&&b>c&&b>d)
printf("b is gretest");
else if(c>a&&c>b&&c>d)
printf("c is gretest");
else if(d>a&&d>b&&d>c)
printf("d is gretest");
return 0;
}
