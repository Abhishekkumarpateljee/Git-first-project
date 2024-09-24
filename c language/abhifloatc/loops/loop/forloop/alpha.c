#include<stdio.h>
int main(){
   int a,b;
    scanf("%d%d",&a,&b);
    char m='a';
    char n='z';
    for(m;m<=n;m++){
        if(a<=b){
            printf("%c\n",m);
        }
    }
    
    return 0;

}