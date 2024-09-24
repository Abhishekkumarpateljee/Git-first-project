#include<stdio.h>
int main(){
    int n;
    printf("ENTER YOUR NO:");
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
    return 0;
}