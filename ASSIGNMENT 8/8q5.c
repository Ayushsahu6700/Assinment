//ASSIGNMENT 8 ans5
//BY AYUSH SAHU
#include<stdio.h>
#include <math.h>
int main()
{
int i,n,x,d,s=0,e,f;
printf("give n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("give no");
scanf("%d",&x);
e=x/10;
e=e%10;
d=x%10;
f=d*e;
s=s+f;
}
printf("%d",s);
return 0;
}