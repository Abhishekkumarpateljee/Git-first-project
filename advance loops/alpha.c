#include<stdio.h>
int main(){
    char a;
    printf("enter your no:");
    scanf("%c",&a);
    int no =97;
int i=1;
    while(i<=no){
    no++;
    printf("%c",no);
    i++;
    }
    return 0;
}