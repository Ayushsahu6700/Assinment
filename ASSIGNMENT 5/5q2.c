//ASSIGNMENT 5 ANS2
//BY AYUSH SAHU
#include<stdio.h>
int main()
   {
      int x,y;
for(y=0;y<10;y++)
{
for(x=0;x<20;x++)
if((x<8&&y<3)||(x>14&&y>6))
printf("0");
else
printf("*");
printf("\n");
}   
return 0;
}
