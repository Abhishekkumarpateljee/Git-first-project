#include<stdio.h>
int main(){
   int a=3,b=3;
   b=  a++ + b-- - a++ * b + a%b++;
   printf("%d %d",a,b);
   return 0;
}
