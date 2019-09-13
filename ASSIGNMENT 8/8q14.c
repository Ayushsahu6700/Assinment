//ASSIGNMENT 8 ans14
//BY AYUSH SAHU
#include<stdio.h>
#include <math.h>
int main()
{
int i,n,x,d,s=0,e,f,g,h,k;
printf("give n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("give no");
scanf("%d",&x);
h=x/100;
e=x%100;
f=x%10;
k=(e-f)/10;
if(f>=k)
g=x;
else if(e>f)
g=h*100+f*10+k;

s=s+g;

}
printf("%d",s);
return 0;
}