#include<stdio.h>
 int sumdigit(int no){
    int sum=0,rem;
    while(no>0){
        rem-no%10;
        sum=sum+rem;
        no=no/10;
    }
        int num=sum;
        int remen;
        int add=0;
        while(sum>10){
        remen=num%10;
        add=add+remen;
        num=num/10;
        }
        return add;

    return 0;
 }
 int main(){
 int num;
 printf("enter your no:");
 scanf("%d",&num);
 sumdigit(num);
 printf("%d",sumdigit(num));
 return 0;
 }