#include<stdio.h> 
int main(){
  int a,b; 
   scanf("%d%d",&a,&b);
   int i=1;
   int sum=0;
while(i<=b){ 
sum=sum+i;
i =i+1;
}
printf("sum of  no between a and b is%d",sum);
   
   
    return 0;
}