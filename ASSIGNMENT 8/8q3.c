//ASSIGNMENT 8 ans3
//BY AYUSH SAHU
#include<stdio.h>
#include <math.h>
int main()
{
int i,n,x,d,s=0,e;
printf("give n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("give no");
scanf("%d",&x);

e=x/10;;
s=s+e;
}
printf("%d",s);
return 0;
}