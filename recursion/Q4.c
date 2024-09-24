#include<stdio.h>
int factorial(int no){
if(no==1 ||no==0){
    return 1;
}

    return no*factorial(no-1);
}


int main(){
    int no;
    printf("enter your no:");
    scanf("%d",&no);
    int f=factorial(no);
    printf("%d",f);
    return 0;
}