#include<stdio.h>
int main(){
int a;
scanf("%d",&a);
int t,i;
t=1;
i=1;
while(i<=10){
t=i*i;
i=i+1;
}
printf("table is %d",t,i);
    return 0;
}