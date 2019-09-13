//ASSIGNMENT 2 ANS10
//BY AYUSH SAHU
#include<stdio.h>
#include<math.h>
int main()
   {
      float h,k,r,s,y1,y2,d;
      
      printf("enter values of h k r s");
      scanf("%f%f%f%f",&h,&k,&r,&s);
      
y1=k-sqrt(r*r-(s-h)*(s-h));
y2=k+sqrt(r*r-(s-h)*(s-h));
d=sqrt((y2-y1)*(y2-y1)); 
  printf("distance=%f",d);
      
return 0;
}
