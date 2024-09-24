#include<stdio.h>
int main(){
    int no;
    scanf("%d",&no);
    int product=1;
    for(int i=1;i<=no;i++){
    product=product*i;
    }
    printf("%d",product);
    return 0;
}