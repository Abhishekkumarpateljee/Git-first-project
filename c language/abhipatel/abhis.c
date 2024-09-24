#include<stdio.h>
int main(){
int om;
scanf("%d",&om);
if(om>=90&&om<=100){
    printf("A+");
}
else{
    if(om>=80&&om<=89){
        printf("B");
    }
    else{
        if("om>=70&&<=79"){
            printf("c");
        }
        else{
            if("om<30"){
                printf("fail");
            }
        }
    }
}

return 0;
}