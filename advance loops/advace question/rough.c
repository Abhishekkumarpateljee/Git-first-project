#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int rem;
    while(n>0){
        rem=n%10;
        if(rem%2!=0){
            printf("%d is odd no\n",rem);
        }
        n=n/10;
    }


}