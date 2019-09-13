//ASSIGNMENT 8 ans6
//BY AYUSH SAHU
#include<stdio.h>
#include <math.h>
int main()
{
int i,n,x,d,s=0,e,f,g;
printf("give n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("give no");
scanf("%d",&x);
e=x/10;
e=e%10;
d=x%10;
f=x/100;
g=f*100+10*d+e;
s=s+g;
}
printf("%d",s);
return 0;
}