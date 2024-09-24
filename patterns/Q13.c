#include<stdio.h>
int main(){
    int n;
    printf("enter your num:");
    scanf("%d",&n);
    
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            printf(" ");
            j++;
        }
        int no=n;
        while(i<=no){
            printf("* ");
            no--;
        }
        printf("\n");
        i++;
    }
    return 0;
}