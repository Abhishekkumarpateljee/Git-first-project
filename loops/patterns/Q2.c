#include<stdio.h>
int main(){
    int num;
    printf("ENTER YOUR NUMBER:");
    scanf("%d",&num);
    int i=1;
    while(i<=num){
        int j=1;
        while(j<=num){
if(j%2!=0){
    printf("*");
}
    else{
        printf("#");
}
j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}