#include<stdio.h>
int main(){
 int num;
    printf("enter your number");
    scanf("%d",&num);
    int i=1;
    while(i<=num){
      int k=1;
  while(k<=num-i){
        printf(" ");
           k++;
        }
        int j=1;
        while(j<=i){
            printf("*");
        j++;
    }
    printf("\n");
    i++;
    }
    return 0;
}