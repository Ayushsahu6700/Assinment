//ASSIGNMENT 7 ANS15
//BY AYUSH SAHU
#include<stdio.h>
#include <math.h>
int main()
{
int n,sum=0,i,j;
printf("enter hoe many nos you want to add\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("enter no");
scanf("%d",&j);
sum=sum+j;
}
printf("sum=%d",sum);


return 0;
}