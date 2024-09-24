#include<stdio.h>
int main(){
    int no;
    scanf("%d",&no);
    int i=1;
    int count =0,power=0,num=no;
    while(no!=0){
        no=no/10;
    count=count+1;
    }
    int base=count;
    while(num!=0){
        num=num/10;
        power=power+num*i;
        i++;
    }
    printf("%d",power);

    
    

    return 0;
}