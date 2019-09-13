//ASSIGNMENT 8 ans15
//BY AYUSH SAHU
#include<stdio.h>
#include <math.h>
int main()
{
int i,n,x,d,s=0,e,f,g=0;
printf("give n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("give no");
scanf("%d",&x);
if(x%2==0)
{e=x;
f=i;}
else
{e=0;
f=0;}
s=(s+i*e)/i;
g=g+f;
}
d=s/g;
printf("%d",d);
return 0;
}