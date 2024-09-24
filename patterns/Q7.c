#include<stdio.h>
int main(){
    int num;
    printf("enter your num");
    scanf("%d",&num);
    int i=1;
    while(i<=num){
        int k=1;
        while(k<=i){
            printf(" ");
            k++;
        }
        int number=num;
        while(i<=number){
            printf("*");
            number--;
        
        }
        printf("\n");
        i++;
    }
    return 0;
}
