#include<stdio.h>
int squre(int no){
int i=1;
while(i<=no){
    int j=1;
    while(j<=no){
        printf("*");
        j++;
    }
    printf("\n");
    i++;
}
return 0;
}
int main(){
    int no;
    printf("enter your no:");
    scanf("%d",&no);
    squre(no);
}