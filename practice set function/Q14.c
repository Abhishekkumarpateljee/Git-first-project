#include<stdio.h>
int factorial(){
    int no;
    printf("enter your no:");
    scanf("%d",&no);
    int i=1,fact=1;
    while(i<=no){
        fact=fact*i;
        i++;
    }
    return fact;

}
int main(){
  printf( "%d", factorial());
  return 0;
}