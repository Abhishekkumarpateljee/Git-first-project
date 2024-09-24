#include<stdio.h>
int main(){
    int i=1;
    int n;
    printf("ener");
    scanf("%d",&n);


    while(i<=n){
        int a=n;
        while(i<=a)
        {
            printf("*");
            a--;
        }
        printf("\n");
        i++;
    }
}