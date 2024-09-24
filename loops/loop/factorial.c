#include<stdio.h>
int main(){
    int no;
    printf("enter your no :");
    scanf("%d",&no);
    int i=1,product=1;
    while(i<=no){
        product = product*i;
        i=i+1;
    }
    printf("factorial of no is : %d\n",product);
    return 0;
}