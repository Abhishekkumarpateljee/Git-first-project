#include<stdio.h> 
int main(){
    int num,count=0;
    printf("enter your no:");
    scanf("%d",&num);
    for(num;num!=0;num=num/10){
        count=count+1;
    }
    printf("no of digit is %d",count);
    return 0;
}