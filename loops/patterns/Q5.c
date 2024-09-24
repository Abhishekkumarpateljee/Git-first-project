#include<stdio.h>
int main(){
    int num;
    printf("enter your number");
    scanf("%d",&num);
    int i=1;
    while(i<=num){
        int j=1;
        while(j<=num){
            if(i%2!=0&&j%2!=0){
                printf("*");
            }
            else{
                if(i%2==0&&j%2==0){
                    printf("*");
                }
                else{
                    printf("#");
                }
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}