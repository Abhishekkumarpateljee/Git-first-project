#include <stdio.h>

int main()
{
   float a=6,b=a;
   a--;
   b=a/b;
   printf("%f",b);
   return 0;
}