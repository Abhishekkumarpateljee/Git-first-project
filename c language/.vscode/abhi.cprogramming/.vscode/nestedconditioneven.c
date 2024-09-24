#include<stdio.h>
int main(){
int a;
printf("enter your no:");
scanf("%d",&a);
if(a%2==0){
printf("even\n");
if(a%4==0){
printf("divisible by 4");
}
else{
printf("not divisible by 4");
}
}
else{
printf("odd\n");
if(a%3==0){
printf("divisible by 3");
}
else{
printf("not divisible by 3");
}
}
return 0;

}