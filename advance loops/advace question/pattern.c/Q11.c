#include<stdio.h>
int main(){
int no;
printf("enter your no:");
scanf("%d",&no);
int i=1;
while(i<=no){
    int  j=1;
    while(j<=no){
        if(i==1 || i==no || j==1 || j==no){
        printf("*");
        }
        int k=1;
        while(k<=no){
if(i!=1 || i!=no || j!=1 ||j==no ){
    printf("  ");
    k++;
}
}
        j++;
    }

printf("\n");
i++;
}
return 0;
}