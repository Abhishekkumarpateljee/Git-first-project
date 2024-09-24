#include<stdio.h>
int main(){
    int no;
    scanf("%d",&no);
    for(int i=1;i<=no;no=no-i){
        printf("%d\n",no);
    }
    return 0;
}