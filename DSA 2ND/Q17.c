#include<stdio.h>
int main(){

int n;
printf(" size :");
scanf("%d",&n);

int arr[n];

for(int i=0 ; i<n ; i++ ){

    scanf("%d",&arr[i]);
}

int k =4 ;
int sum =0 ;
int count =0 ;
for(int i=0 ; i<n ; i++ ){

    for(int j= i+1 ; j<n ; j++ ){

        sum = arr[i] + arr[j] ;

          if(sum % k == 0 ){
            
            count++;
            
          }

    }
}

 printf("count of pair who is div by k is %d" ,count);








    return 0;
}