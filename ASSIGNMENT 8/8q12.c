//ASSIGNMENT 8 ans12
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
if(x>=30&&x<=90)
e=x;
else 
e=0;
s=s+e;

}
printf("%d",s);
return 0;
}