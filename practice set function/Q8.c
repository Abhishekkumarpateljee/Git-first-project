#include<stdio.h>
int oddev(int n){
    int i=2;
    if(n%i==0){
        printf("even=%d",n);
    }
    else{
    printf("odd=%d",n);
    }
    return 0;
}
void input(){
int no;
printf("enter your no:");
scanf("%d",&no);
oddev(no);
}
int main(){
    input();
   
   return 0;
}
