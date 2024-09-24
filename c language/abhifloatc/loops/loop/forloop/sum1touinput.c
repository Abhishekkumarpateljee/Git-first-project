#include<stdio.h>
int main(){
    int no;
    scanf("%d",&no);
    int sum=0;
    for(int i=1;i<=no;i++){
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}