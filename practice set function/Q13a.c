#include<stdio.h>
int pyramid(int no){
int i=1;
while(i<=no){
    int k=no;
    while(i<k){
        printf(" ");
        k--;
    }
    int j=1;

    while(j<=i){

        if(i%2!=0){

            printf(" *");
        }
        j++;

}
printf("\n");

i++;

}
return 0;

}

int main(){
    int n;
    printf("enter your no:");
    scanf("%d",&n);
    pyramid(n);
    return 0;

}