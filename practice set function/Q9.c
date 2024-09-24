#include<stdio.h>
void prime(){
    int no;
    printf("enter your no:");
    scanf("%d",&no);
    int i=2;
    while(no>0){
    if(no%i==0){
      printf("not prime\n");
        break;
    }
    i++;
    if(i==no){
        printf("prime no");
    }

       }  
       return;
}
int main(){

prime();
    return 0;
}