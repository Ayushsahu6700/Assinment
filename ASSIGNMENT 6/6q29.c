//ASSIGNMENT 6 ANS19
//BY AYUSH SAHU
#include<stdio.h>
int main()
{
int i,j;
for(j=1;j<=6;j++)
{
for(i=1;i<=7-j;i++)
printf(" ");
for(i=1;i<=j;i++)
printf("%c",70-j+i);

printf("\n");

}

}