#include<stdio.h>
int mult(int x,int y){
    int product=x*y;
    return product;
}
int main(){
     int x,y;
    printf("enter your no;");
    scanf("%d",&x);
    printf("enter your no:");
    scanf("%d",&y);
    mult(x,y);
    printf("%d",mult(x,y));
    return 0;
}