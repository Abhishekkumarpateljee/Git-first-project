#include<stdio.h>
int main(){
int a;
printf("enter your no:");
scanf("%d",&a);
if(a%2!=0){
printf("odd");
if(a%3==0){
printf("divisible by 3");
}
else{
printf("not divisible by 3");
}
}
else{
printf("even");
if(a%2==0){
printf("divisible by 2");
}
}

    return 0;
}