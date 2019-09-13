//ASSIGNMENT 7 ANS19
//BY AYUSH SAHU
#include<stdio.h>
#include <math.h>
int main()
{
int n,i,j,ans=0,k;
printf("enter how many pairs  \n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("enter pair");
scanf("%d%d,",&j,&k);
ans=ans+j*k;

}

printf("ans=%d",ans);


return 0;
}