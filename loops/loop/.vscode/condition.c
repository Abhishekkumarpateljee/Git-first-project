#include<stdio.h>
int main(){
    int no;
    scanf("%d",&no);
    if(no>99&&no<1000){
        printf("three digit no");
    }
        if(no>999||no<100){
            printf("not three digit no");
        }
    return 0;
}