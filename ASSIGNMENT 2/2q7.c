//ASSIGNMENT 2 ANS7
//BY AYUSH SAHU
#include<stdio.h>
#include<math.h>
int main()
   {
      int a,b,c,p,q,r,m,n,x,y;
      
      printf("enter values of a\nb\nc\np\nq\nr\n");
      scanf("%d%d%d%d%d%d",&a,&b,&c,&p,&q,&r);
      x= (b*r - c*q)/(a*q - p*b);
      y= (a*r - c*p)/(b*p - a*q);
      printf("The point of intersection is( %d , %d)",x,y);
return 0;
}
