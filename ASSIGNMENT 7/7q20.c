//ASSIGNMENT 7 ANS20
//BY AYUSH SAHU
#include<stdio.h>
#include <math.h>
int main()
{
int n,k,i,j,ans=0,m;
printf("enter how many groups  \n");
printf("enter how many members  \n");
scanf("%d%d",&n,&m);
for(i=1;i<=n;i++)
{
for(k=1;k<=m;k++)
{
printf("enter no");
scanf("%d,",&j);
ans=ans+j;
}
}

printf("ans=%d",ans);


return 0;
}