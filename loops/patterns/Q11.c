#include<stdio.h>
int main(){
    int n;
    printf("enter your num:");
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i){
            printf(" ");
            j++;
        }
        int k=1;
        while(k<=i){
    printf("*");
    k++;
        }
        printf("\n");
        i++;
    }
    int x=1;
    while(x<=n){
        int y=1;
        while(y<=x){
            printf(" ");
            y++;
        }
        int no=n;
        while(x<=no-1){
            printf("*");
            no--;
        }
        printf("\n");
        x++;
    }
    return 0;
}