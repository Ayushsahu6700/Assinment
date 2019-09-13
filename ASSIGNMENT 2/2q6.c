//ASSIGNMENT 2 ANS6
//BY AYUSH SAHU
#include<stdio.h>
#include<math.h>
int main()
   {
      float a,b,c,g,f,R;
      
      printf("enter values of a b c");
      scanf("%f%f%f",&a,&b,&c);
      g=a/2;
      f=b/2;
      printf("centre of circleis (%f, %f)",g,f);
R=sqrt(g*g+f*f-c);
printf("radius of circle is=%f",R);
      
return 0;
}
