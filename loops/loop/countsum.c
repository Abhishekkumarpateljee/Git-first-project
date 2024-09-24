#include<stdio.h>
int main(){
    int num;
    printf("enter your number: ");
    scanf("%d",&num);
int no=num;
    int sum =0;
    for(;no!=0;no=no/10){
        sum=sum+(no%10);
        
    }
    printf("%d\n",sum);
    return 0;
}