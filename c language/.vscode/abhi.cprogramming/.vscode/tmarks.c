#include<stdio.h>
int main(){
    int tmarks;
    scanf("%d",&tmarks);
    int omarks;
    scanf("%d",&omarks);
    if(omarks>=70){
        printf("pass");
    }
    else{
        printf("fail");
    }
    return 0;
}
