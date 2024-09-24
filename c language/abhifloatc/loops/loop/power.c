#include<stdio.h>
int main(){
    int b;
    scanf("%d",&b);
    int exp;
    scanf("%d",&exp);
    int i=1,power=1;
    while(i<=b){
        power=power*exp;
        i=i+1;
    }
    printf("%d",power);
    
    return 0;
}