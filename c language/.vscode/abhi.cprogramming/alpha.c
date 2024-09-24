#include<stdio.h>
int main(){
int m='a';
int n='z';
int alpha=1;
int i=0;
while(i<=n){
    alpha=m+i;
    i=i+1;
    printf("%d\n:",alpha);
}
return 0;
}