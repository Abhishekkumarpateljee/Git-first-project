#include<stdio.h>
int main(){
    int n;
    printf("ENTER YOUR NO:");
    scanf("%d",&n);
    int i=1;
    while(i<=n){
    int j=1;
     while(j<=i){
        printf("*");
        j++;
     }
     printf("\n");
     i++;
    }
    int x=1;
    while(x<=n){
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