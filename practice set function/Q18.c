#include<stdio.h>

int factorial(int no){
int rem;
while(no>0){
    rem=no%10;
    int i=1,fact=1;
    while(i<=rem){
     fact=fact*i;
     i++;
    }
    return fact;
    no=no/10;
}

}
int strongno(int no){
    int temp=no;
int sum=0;
while(temp>0){
    temp=temp%10;
    sum=sum+factorial(temp);
    temp=temp/10;
    return sum;
}
}


int main(){
    int no=145;
    factorial(no);
    printf("%d",factorial(no));
    return 0;
}