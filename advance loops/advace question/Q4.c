#include<stdio.h>
int main(){
    int no;
    printf("enter your no:");
    scanf("%d",&no);
    int rem,i=1,c=0;
    while(no>0){
        rem=no%10;
        no=no/10;
        c++;
        if(i==1){
            printf("%d is last digit:\n",rem);
            i++;
        }
        
    
    }
    printf("%d is first digit:\n ",rem);
    return 0;
}