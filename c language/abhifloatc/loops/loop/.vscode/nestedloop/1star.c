#include<stdio.h>
int main(){
    int n,i=1;
    printf("enter ypur no");
    scanf("%d",&n);
    char star='*';
    for(i=1;i<=n;i++){
        printf("%c",star);
    }
return 0;
}