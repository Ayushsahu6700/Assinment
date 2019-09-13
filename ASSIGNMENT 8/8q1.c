//ASSIGNMENT 8 ans1
//BY AYUSH SAHU
#include<stdio.h>
#include <math.h>
int main()
{
int i,n,x,d,s=0;
printf("give n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("give no");
scanf("%d",&x);
d=x%10;
s=s+d;
}
printf("%d",s);
return 0;
}