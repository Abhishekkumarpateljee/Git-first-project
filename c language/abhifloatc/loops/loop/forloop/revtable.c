#include<stdio.h>
int main(){
    int no;
    scanf("%d",&no);
    int i,table=1;
    for(i=10;i!=0;i--){
    table=no*i;
    printf("%d\n",table);
    }
    return 0;
}
    
