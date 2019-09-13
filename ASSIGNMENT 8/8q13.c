//ASSIGNMENT 8 ans13
//BY AYUSH SAHU
#include<stdio.h>
#include <math.h>
int main()
{
int i,n,x,d,s=0,e,f,g,h;
printf("give n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("give no");
scanf("%d",&x);
if(x%2!=0)
e=1;
else if(x%2==0)
e=0;
if(x%2!=0)
f=x;
else if(x%2==0)
f=0;
s=s+f;
g=g+e;

}
h=s/f;
printf("%d",h);
return 0;
}