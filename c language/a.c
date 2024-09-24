#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a<=100&&a>=90){
        printf("A+");
    }
    else{
        if(a<=80&&a>=89){
            printf("B");
        }
        else{
            if(a<30){
                printf("fail");
            }
        }
    }
    return 0;
}
