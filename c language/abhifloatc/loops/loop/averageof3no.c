#include<stdio.h>
int main(){
    int no;
    printf("enter your no :");
    scanf("%d",&no);
    int i=1,sum=0,average;
    while(i<=no){
       sum=sum+i;
       i=i+1;
    }
   average=sum/no;
   printf("average  is %d",average);
return 0;
}+
