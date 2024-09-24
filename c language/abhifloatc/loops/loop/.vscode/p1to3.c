#include<stdio.h>
int main(){
    int i=1;
    while(i<=3){
        int j=1;
        while(j<=3){
            printf("%d",j);
            j++;
        }
        i++;
        printf("\n");
    }
    return 0;
}