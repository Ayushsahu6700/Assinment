//ASSIGNMENT 3 ANS11
//BY AYUSH SAHU
#include<stdio.h>
#include<math.h>
int main()
   {
      float a,b,c;
printf("enter three numbers");
scanf("%f%f%f",&a,&b,&c);
if((a>b&&b>c)||(a<b&&b<c))
printf("middle is=%f",b);
else if((b>c&&c>a)||(b<c&&c<a))
printf("middle is=%f",c);
else if((c>a&&a>b)||(c<a&&a<b))
printf("middle is=%f",a);
return 0;
}
