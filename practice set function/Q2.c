#include<stdio.h>
int addition(int a, int b){
    int result=a+b;
    return result;

}
int addition(int a,int b);
int main(){
    int x ;
    printf("enter your no a:");
    scanf("%d",&x);
    int y;
    printf("enter your no b:");
    scanf("%d",&y);
     addition(x,y);
    printf("result=%d",addition(x,y));
    return 0;

}
