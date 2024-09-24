#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i=1;
   int  num=97;
   int j=1;
   while(i<=n){
    int b=1;
    while(b<=i){
        if(b%2==0){
            printf("%c",num);
            num++;
        }
        else{
            printf("%d",j);
            j++;
        }
        b++;
    }
    printf("\n");
    i++;
   }
   return 0;
}