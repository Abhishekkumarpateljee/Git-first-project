#include<stdio.h>
int main(){
    int a;
    printf("Enter your no:");
    scanf("%d",&a);
    int b;
    printf("enter your no:");
    scanf("%d",&b);
    int i=1,sum=0,average=0;
    while(i<=b){
        if(a<=b){
        sum=sum+i;
        i=i+1;
        average=sum/b;
        }
    }
   printf("average b/w a and b is %d",average);
    return 0;
}