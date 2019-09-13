//ASSIGNMENT 8 ans21
//BY AYUSH SAHU
#include<stdio.h>
#include <math.h>
int main()
{
int i,n,x,d,s=0,e,f,g=0,y,j,z;
printf("give n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("give no");
scanf("%d",&x);
if(x%2==0)
{
printf("give no");
scanf("%d",&z);
if(z%2==0)
{
for(j=1;j<=n-i;j++)
{
printf("enter the no");
scanf("%d",&y);
s=s+y;

}
break;
}

else
{ 
continue;
}

}
else
{continue;}
}

printf("%d",s);
return 0;
}