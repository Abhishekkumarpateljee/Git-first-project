#include<stdio.h>
int main(){
int year;
printf("enter your year");
scanf("%d",&year);
if(year%4==0){
printf("leap year");
if(year%8==0){
printf("divisible by 8");
}
else{
printf("not divisible 5");
}
}
else{
printf("normal year");
if(year%5==0){
printf("divisible by 5");
}
else{
printf("not divisible by 5");
}
}
   return 0;
}