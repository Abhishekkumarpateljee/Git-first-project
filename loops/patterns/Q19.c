#include<stdio.h>
int main(){
   int num;
    printf("enter your no:");
    scanf("%d",&num);
    int i=1;
    int x=1;
    while(i<=num){
        int j=1;
        int y=x;
        while(j<=i){
    printf("%d",y);
        y++;
        j++;
    }
    printf("\n");
    x++;
    i++;
}
    return 0;
}