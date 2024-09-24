#include<stdio.h>
int main(){
    int n;
    printf("enter your no:");
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        int k=1;
        while(k<=n-i){
            printf(" ");
            k++;
        }
        int j=1;
        while(j<=i){
        printf("* ");
        j++;
        }
        printf("\n");
        i=i+2;
    }
    int x=1;
    while(x<=n){
        int z=1;
        while(z<=x+1){
            printf(" ");
            z++;
        }
        int no=n;
        while(x<=no-2){
            printf("* ");
            no--;
        }
        printf("\n");
        x++;
    }
    return 0;
}