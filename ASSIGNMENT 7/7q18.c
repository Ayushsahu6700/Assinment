//ASSIGNMENT 7 ANS18
//BY AYUSH SAHU
#include<stdio.h>
#include <math.h>
int main()
{
int n,i,j,ans=0;
printf("enter how many dimensions \n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("enter no");
scanf("%d,",&j);
ans=ans +j*j;

}
ans=sqrt(ans);
printf("ans=%d",ans);


return 0;
}