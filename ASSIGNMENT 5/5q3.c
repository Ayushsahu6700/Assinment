//ASSIGNMENT 5 ANS3
//BY AYUSH SAHU
#include<stdio.h>
int main()
   {
      int x,y;
for(y=0;y<4;y++)
{
for(x=0;x<20;x++)
if((x+y)%2==0)
printf("0");
else
printf("*");
printf("\n");
}   
return 0;
}
