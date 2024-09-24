#include<stdio.h>
int main(){
int sp,cp;
scanf("%d%d",&sp,&cp);
int d=sp-cp;
printf("%d",d);
if(d>=1){
    printf("profit");
}
else{
    if(d<=0){
        printf("loss");
    }
}
    return 0;
}