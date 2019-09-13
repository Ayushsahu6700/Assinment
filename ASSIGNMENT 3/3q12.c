//ASSIGNMENT 3 ANS12
//BY AYUSH SAHU
#include<stdio.h>
#include<math.h>
int main()
   {
      float p,q,r,a,b,c,d,D,X1,X2,Y1,Y2,A,chord;
printf("enter six numbers");
scanf("%f%f%f%f%f%f",&p,&q,&r,&a,&b,&c);
d=(a*p + b*q + c)/(sqrt(a*a + b*b));
if(d<0)
{
d=-d;
}
else
{
d=d;
}
if(d<r)
{
printf("line intersect");
D=(-2*b*b*p + 2*c*a + 2*a*b*q)*(-2*b*b*p + 2*c*a + 2*a*b*q) - 4*(b*b + a*a)*(b*b*p*p + c*c + b*b*q*q + 2*b*c*q - r*r*b*b);
X1=(-(-2*b*b*p + 2*c*a + 2*a*b*q) + sqrt(D))/2*(b*b + a*a);
X2=(-(-2*b*b*p + 2*c*a + 2*a*b*q) - sqrt(D))/2*(b*b + a*a);
Y1=(-c - a*X1)/b;
Y2=(-c - a*X2)/b;
chord=sqrt((Y2-Y1)*(Y2-Y1) + (X2-X1)*(X2-X2));
A=(d*chord)/2;
printf("\narea of triangle=%f",A);
}
else
{
printf("line not intersect");
}

return 0;
}
