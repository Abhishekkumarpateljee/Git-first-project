#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int nextterm=0;
    int no1=0,no2=1;
    printf("%d,%d,",no1,no2);
     nextterm=no1+no2;
    while(nextterm<=num){
        printf("%d,",nextterm);
        no1=no2;
        no2=nextterm;
        nextterm=no1+no2;
    }
    return 0;
}