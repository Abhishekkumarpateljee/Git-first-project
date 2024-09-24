#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int i=1,sum=0;
    while(i<=b){
        if(i%2==0){
        sum=sum+i;
        printf("%d",sum);
        i=i+1;
    }
    }
    return 0;
}