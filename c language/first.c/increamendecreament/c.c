#include<stdio.h>
int main()
{
   int a=6+1,b=5;
   a--;
   int c=a++;
   a=b--;
   b=++c;
   printf("%d",++c+a+b);
   return 0;
}