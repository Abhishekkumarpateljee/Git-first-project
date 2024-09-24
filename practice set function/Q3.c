#include<stdio.h>
int sub(int a, int b){
    int subtract=a-b;
    return subtract;
}
int main(){
    int x,y;
    printf("enter your no;");
    scanf("%d",&x);
    printf("enter your no:");
    scanf("%d",&y);
    sub(x,y);
    printf("%d",sub(x,y));
    return 0;
}
