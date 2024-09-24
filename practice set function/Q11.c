#include<stdio.h>

void reverse(int no){
    int rem,rev=0;
    while(no>0){
        rem=no%10;
        rev=rev*10+rem;
        no=no/10;
    }
    printf("%d",rev);

}
void input(){
    int no;
printf("enter your no");
scanf("%d",&no);
reverse(no);

}

int main(){
    input();
    return 0;

}