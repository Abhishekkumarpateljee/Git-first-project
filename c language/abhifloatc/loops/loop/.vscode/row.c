#include<stdio.h>
int main(){
    char m='a';
    char n='Z';
    int alpha=0,i=0;
    while(i<=n){
        alpha=m+i;
        printf("=%c\n",alpha,alpha);
        printf("%d",alpha);
        i++;
    }
    return 0;
}