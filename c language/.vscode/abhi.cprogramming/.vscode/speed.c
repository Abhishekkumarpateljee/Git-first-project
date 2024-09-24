#include<stdio.h>
int main(){

    int speed;
    scanf("%d",&speed);
    if(speed<=100){
        printf("safe");
    }
    else{
        printf("unsafe");
    }
}