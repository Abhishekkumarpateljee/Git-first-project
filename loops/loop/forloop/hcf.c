#include<stdio.h>
int main(){
    int no1,no2;
    printf("enter our no:");
    scanf("%d%d",&no1,&no2);
    int i,hcf=1,min;
    min=(no1<no2) ? no1:no2;
    for(i=1;i<=min;i++){
        if(no1%i==0&&no2%i==0){
            hcf=i;
        }
    }
    printf("hcf is %d",hcf);
    return 0;

}