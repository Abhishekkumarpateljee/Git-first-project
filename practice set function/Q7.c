#include<stdio.h>
int a,b;
int mult(int a,int b){
    printf("enter your no a:");
    scanf("%d",&a);
    printf("enter your no b:");
    scanf("%d",&b);
    int product=a*b;
    return product;
}
int main(){
   printf( "%d",mult(a,b));
    return 0;
}