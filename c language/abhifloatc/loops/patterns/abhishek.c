#include<stdio.h>
int main(){
    int n=3;
    int m=4;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=2){
            printf("*#*");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}