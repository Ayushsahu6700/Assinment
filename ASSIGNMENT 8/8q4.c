//ASSIGNMENT 8 ans4
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
e=x/100;
d=x%10;
f=e*10+d;
s=s+f;
}
printf("%d",s);
return 0;
}