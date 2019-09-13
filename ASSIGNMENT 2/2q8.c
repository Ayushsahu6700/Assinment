//ASSIGNMENT 2 ANS8
//BY AYUSH SAHU
#include<stdio.h>
#include<math.h>
int main()
   {
      float a,b,c,A,A0;
      
      printf("enter values of a b c");
      scanf("%f%f%f",&a,&b,&c);
      A=acos((b*b+c*c-a*a)/(2*b*c));
A0=(A*180)/3.14;
     
  printf("required angle IN RADIAN %f",A);
printf("REQUIRED ANGLE IN DEGREE %F",A0);
      
return 0;
}
