#include<stdio.h>
int main(){
    int passingmarks;
    scanf("%d",&passingmarks);
    int obtainedmarks;
    scanf("%d",&obtainedmarks);
    if(obtainedmarks>=passingmarks){
        printf("pass");
    }
    else{
        printf("fail");
    }



}