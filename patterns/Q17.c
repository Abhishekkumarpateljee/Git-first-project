#include<stdio.h>
int main(){
    int num;
    printf("enter your no:");
    scanf("%d",&num);
    int i=1;
    while(i<=num){
        int j= 1;
        while(j<=num){
    printf("%d",j);
        j++;
    }
    printf("\n");
    i++;
}
return 0;
}