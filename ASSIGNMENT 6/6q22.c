//ASSIGNMENT 6 ANS12
//BY AYUSH SAHU
#include<stdio.h>
int main()
{
int i,j;
for(j=1;j<=6;j++)
{
for(i=1;i<=j;i++)
printf("%c",64+i);
for(i=1;i<=7-j;i++)
printf("%c",96+i);
printf("\n");

}

}