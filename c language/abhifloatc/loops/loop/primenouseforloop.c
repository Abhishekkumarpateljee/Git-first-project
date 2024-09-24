#include<stdio.h>
int main(){
    int no;
    scanf("%d",&no);
    int i=2;
    for(i;i<no;i++){
        if(no%i==0){
            printf("not prime no");
            break;
        }
       // i++;
    }
        if(i==no){
            printf("prime no");
        
    }
    return 0;
}