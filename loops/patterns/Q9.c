#include<stdio.h>
int main(){
    int num;
    printf("ENTER YOUR NUMBER");
    scanf("%d",&num);
    int i=1;
    while(i<=num){
        int k=1;
    while(k<=num-num+i){
        printf(" ");
        k++;
   }
        int no=num;
        while(i<=no){
            printf("* ");
            no--;
        }
        printf("\n");
        i++;
    }
    return 0;
}