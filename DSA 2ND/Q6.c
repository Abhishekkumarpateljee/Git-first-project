#include<stdio.h>
int main(){

int n;
printf(" size :");
scanf("%d", &n);

int arr[n];

int sum = 0 , add = 0  ;

for(int i=0 ; i<n ; i++){

    scanf("%d",& arr[i]);
    add = add + arr[i] ;

}
 for(int i=1 ; i <= n+1 ; i++){

    sum = sum + i ;

}

  int miss = sum - add ;

  printf("miss = %d ",miss) ;


return 0;
}