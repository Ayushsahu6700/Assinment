//ASSIGNMENT 3 ANS8
//BY AYUSH SAHU
#include<stdio.h>
#include<math.h>
int main()
   {
      float a,b,c;
printf("enter three numbers in which two are equal");
scanf("%f%f%f",&a,&b,&c);
if(a==b)
printf("%f",c);
else if(b==c)
printf("%f",a);
else if(a==c)
printf("%f",b);
return 0;
}
