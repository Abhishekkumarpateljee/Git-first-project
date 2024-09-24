#include<stdio.h>
int main(){
int a;
printf("enter your no:");
scanf("%d",&a);
if(a%5==0){
printf("divisible by 5");
if(a%11==0){
printf("divisible by 11");
}
}
else{
printf("not divisible by 5 and 11");
}
    return 0;
}