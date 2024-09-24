#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int sum=0;
    for(a;a<=b;a++){
        if(a%2==0){
            sum=sum+a;
        }
    }
    printf("%d",sum);
    return 0;
}