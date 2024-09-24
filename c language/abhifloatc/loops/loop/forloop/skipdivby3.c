#include<stdio.h>
int main(){
    int a=1,b=10;
int i;
for(i=1;i<=b;i++){
    if(i%3==0){
        continue;
    }
    printf("%d\n",i);
}
    return 0;
}