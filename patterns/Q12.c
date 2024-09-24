#include<stdio.h>
int main(){
    int n;
    printf("enter your num:");
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        int no=n;
        while(i<=no){
            printf(" ");
            no--;
        }
        int j =1;
        while(j<=i){
            printf("* ");
            j++;
        }
        printf("\n");
        i=i+2;
    }

    return 0;
}