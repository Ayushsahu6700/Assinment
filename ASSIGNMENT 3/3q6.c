//ASSIGNMENT 3 ANS6
//BY AYUSH SAHU
#include<stdio.h>
#include<math.h>
int main()
   {
      float a,b,c,d,r1,r2,R,I1,I2;
printf("enter three numbers");
scanf("%f%f%f",&a,&b,&c);
d=sqrt(b*b-(4*a*c));
r1=(-b+d)/(2*a);
r2=(-b-d)/(2*a);


if(d>0)
printf("real roots=%f,%f",r1,r2);
else
{
 if(d==0)
printf("real root=%f",r1);
else
{
 R=-b/(2*a);
I1=(sqrt(-1*(b*b-(4*a*c))))/(2*a);
I2=-(sqrt(-1*(b*b-(4*a*c))))/(2*a);
printf("real imag imag %f,%f,%f",R,I1,I2);
}
}
return 0;
}
