#include<stdio.h>
int main(){
    int no;
    printf("enter your no:");
    scanf("%d",&no);
    int no1=no;
    int i=1;
    int sum= 0;
    int  average,max,min;
    while(i<=no){
        printf("enter your no2:");
        scanf("%d",&no1);
        sum=sum+no1;  
         i++;
    }
    average=sum/no1;
    printf("%d",average);
    return 0;
}
