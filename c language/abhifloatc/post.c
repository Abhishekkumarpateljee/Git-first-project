#include<stdio.h>
int main(){
int x=5,y;
y= x++;
printf(" after y=x++,x is %d,y is %d\n",x,y);

y=++x;
printf("after y=++x,x is %d,y is %d,y is %d\n",x,y);



    return 0;
}