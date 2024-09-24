#include<stdio.h>
int main(){
    int no;
    printf("enter your no:");
    scanf("%d",&no);
    int i=1,sum=0;
    while(i<=no){
        sum=sum+i;
        i=i+1;
    }
    printf("sum of no b/w 1 to 10 is : %d\n",sum);
    return 0;
}