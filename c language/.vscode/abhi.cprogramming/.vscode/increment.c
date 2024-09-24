#include<stdio.h>
int main()
{
   int a=5,b=10;
   a=a++ % b-- + a--;
   printf("%d %d ",a,b);
   return 0;
}