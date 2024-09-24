#include<stdio.h>
int main(){
 int a;
  scanf("%d",&a);
  int b;
  scanf("%d",&b);
  int c;
  scanf("%d",&c);
  int d=a+b+c;
  printf("sum of a,b and c is %d",d);
  if(d==180){
    printf("valid");
  }
else{
printf("not valid");

}
 

}