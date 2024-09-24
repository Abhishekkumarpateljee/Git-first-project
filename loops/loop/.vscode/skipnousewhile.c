#include<stdio.h>
int main(){
    int i=1;
    while(i<=10){
        if(i%3==0){
            i++;
        continue;
        }
        printf("%d",i);
        i++;
    }
}