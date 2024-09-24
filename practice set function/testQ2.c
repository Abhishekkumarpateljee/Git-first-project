#include<stdio.h>
int factodd(int no){
    int i=1,fact=1;
    while(i<=no){
        if(no%2!=0){
            fact=fact*i;
            i++;
        }
    }
    return fact;
}
int main(){
    int no;
    printf("enter your no:");
    scanf("%d",&no);
    while(no>0){
    scanf("%d",&no);
    }
    factodd(no);
    printf("%d",factodd(no));
    return 0;
}