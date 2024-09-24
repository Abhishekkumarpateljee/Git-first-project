#include<stdio.h>
int main(){
    int n;
    printf("enter ypur no");
    scanf("%d",&n);
    char star='*';
    for(int i=1;i<=n;i++){
        printf("%c\n",star);
    }
return 0;
}