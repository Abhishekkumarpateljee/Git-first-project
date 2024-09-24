#include<stdio.h>
int main(){
int a,a2,a3;
scanf("%d%d%d",&a,&a2,&a3);
int d=a+a2+a3;
printf("%d",d);
if(d==180){
    printf("valid");
}
else{
    if(a==a2&&a2==a3){
        printf("equilateral triangle");
    }
    else{
        if(a==a2&&a2!=a3){
            printf("isocelus triangle");
        }
        else{
            if(a!=a2&&a2!=a3){
                printf("scalene triangle");
            }
            }
        }
    }

return 0;
}