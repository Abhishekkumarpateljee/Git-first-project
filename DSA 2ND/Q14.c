#include<stdio.h>
int main(){

 int n;
 printf(" size :");
 scanf("%d",&n);

 int arr[n] ;

 for(int i=0 ; i<n ; i++ ){

    scanf("%d",& arr[i]);


 }
 int max_diff = arr[1] - arr[0] ;

  for(int i=0 ; i<n ; i++ ){

    for(int j =i+1 ; j<n ; j++ ){

        if( arr[j] - arr[i] > max_diff ){

        max_diff = arr[j] - arr[i] ;

        }

     }

  }  

   printf(" maximum diff = %d ,", max_diff);







    return 0;
}