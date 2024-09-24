#include<stdio.h>
int main(){
   int a=6,b=3;
   int c=++a + --b *2;
   a=6;
   printf("%d",++a +c);
   return 0;
}