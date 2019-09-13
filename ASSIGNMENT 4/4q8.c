//ASSIGNMENT 4 ANS8

//BY AYUSH SAHU
#include<stdio.h>
#include<math.h>
int main()
   {
      int x;
for(x=0;x<100;x++)
{
if(((x%3==0)||(x%5==0))&&!((x%5==0)&&(x%3==0)))
printf("\n%d",x);
}
return 0;
}
