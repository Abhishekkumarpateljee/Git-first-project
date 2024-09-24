#include<stdio.h>
int main(){
    int no;
    printf("enter your no");
    scanf("%d",&no);
    int rem,num,sum=0;
    num=no;
    while(num!=0){
        rem=num%10;
       int fact=1,i=1;
        while(i<=rem){
            fact=fact*i;
            i++;
    }
      sum=sum+fact;
      num=num/10;
    }
    if(no==sum){
        printf("strong no");
    }
    else{
        printf("not strong");
    }
    return 0;
}