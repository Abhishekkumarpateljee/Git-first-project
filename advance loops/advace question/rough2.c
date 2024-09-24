#include<stdio.h>
int main(){
    int n;
    printf("enter your no:");
    scanf("%d",&n);
    int num=65,numb=97;
    int i=1;
    int k=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            if(i==1){
            printf("%c",num);
            num++;
            }
            else{
                if(i==n){
                    printf("%c",numb);
                    numb++;
                }
                else{
                    printf("%d",k);
                    k++;
                }
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}