#include<stdio.h>
int rv(int no){
    int rem,rev=0;
    while(no>0){
        rem=no%10;
        rev=rev*10+rem;
        no=no/10;
    }
    return rev;
    printf("%d",rev);
}
int pallin(int no){
    int digit=rv(no);
    if(no==digit){
        printf("%d is pallindrome no",digit);
    }
    else{
        printf("%d is not pallindrome no",digit);
    }
    return 0;
}

int main(){
    int no;
printf("enter your no:");
scanf("%d",&no);
    pallin(no);
    return 0;
}