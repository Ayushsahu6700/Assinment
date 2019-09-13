//ASSIGNMENT 2 ANS9
//BY AYUSH SAHU
#include<stdio.h>
#include<math.h>
int main()
   {
      float a,b,c,d,e,f,h,g,E,F,G,D,R,R1,A,pi=3.14;
      
      printf("enter values of a b c d e f g h");
      scanf("%f%f%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f,&g,&h);
      E=-e/2;
F=-f/2;
G=-g/2;
R=sqrt(F*F+E*E+G*G-h);
printf("\nR=%f",R);
D=(a*(E)+b*(F)+c*(G)+d)/(sqrt(a*a+b*b+c*c));
printf("\nD=%f",D);

R1=sqrt((R*R)-(D*D));
printf("%f",R1);
A=pi*R1*R1;   
  printf("\nAREA OF REQUIRED CIRCLE=%f",A);
      
return 0;
}
