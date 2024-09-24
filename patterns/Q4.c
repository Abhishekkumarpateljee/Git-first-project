#include<stdio.h>
int main(){
    int num;
    printf("enter your number");
    scanf("%d",&num);
    int i=1;
    while(i<=num){
        int no=num;
        while(i<=no){
            printf("*");
            no--;
        }
        printf("\n");
        i++;
    }
    return 0;
}