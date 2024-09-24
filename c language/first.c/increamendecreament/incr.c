#include<stdio.h>
int main(){
   int a=6;
   int b=7;
   a++ + --a;
   b=a;
   int c=a-- * ++b;
   b=++c;
   printf("%d",b);
   return 0;
}
