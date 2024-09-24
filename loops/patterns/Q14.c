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
            printf("* ");
            no--;
        }
        printf("\n");
        x++;
    }
    return 0;
}