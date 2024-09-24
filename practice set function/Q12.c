#include<stdio.h>
int fib(int no){
if(no==1||no==2){
    return 0 ;
}
return fib(no-1) + fib(no-2);
}

int main(){
int no;
scanf("%d",&no);
fib(no);
printf("%d",fib(no));
}