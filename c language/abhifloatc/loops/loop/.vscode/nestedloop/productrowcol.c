#include<stdio.h>
int main(){
    int row=2;
    int col=3;
    int i=1;
    for(i=1;i<=row;i++){
        int j=1;
        for(j=1;j<=col;j++){
            printf("%d",row*col);
        }
        printf("\n");
    }
    return 0;
}