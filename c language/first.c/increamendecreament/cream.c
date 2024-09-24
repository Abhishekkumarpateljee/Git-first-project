#include<stdio.h>
int main()
{
   int a=10,b=7;
   int c= --a + b++ * a;
   printf("%d %d %d",a,b,c);
   return 0;
}