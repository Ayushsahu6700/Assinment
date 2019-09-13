//ASSIGNMENT 5 ANS1
//BY AYUSH SAHU
#include<stdio.h>
int main()
   {
      int x,y;
for(y=0;y<5;y++)
{
for(x=0;x<20;x++)
if((y%2==0)||((x%2==0)&&(y%2==1)))
printf("*");
else
printf("0");
printf("\n");
}   
return 0;
}
