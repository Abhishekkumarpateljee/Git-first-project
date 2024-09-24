#include<stdio.h>
int main(){
int i,b;
scanf("%d%d",&i,&b);
int sum;
sum=0;
while(i<=b){
if(i%2==0)
 sum =sum+i;
    i=i+1;
}
printf("sum of first 10 natural no%d",sum);
    return 0;
}