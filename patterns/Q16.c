#include<stdio.h>
int main(){
    int n;
    printf("enter your num");
    scanf ("%d",&n);
    int num=65;
    int i=0;
    while(i<=n){
        int j=1;
        int x=num;
        while(j<=n){
        printf("%c",x);
            x++;
            j++;
        }
        num++;
        printf("\n");
        i++;
    }
    return 0;
}