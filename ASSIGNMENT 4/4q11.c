//ASSIGNMENT 4 ANS11
//BY AYUSH SAHU
#include<stdio.h>
#include<math.h>
int main()
   {
      int x,d,e,s,f;
for(x=0;x<100;x++)
{
d=x/10;
e=d%10;
f=x%10;
s=f+e;
if(s%7==0)
printf("\n%d",x);
}    
return 0;
}
