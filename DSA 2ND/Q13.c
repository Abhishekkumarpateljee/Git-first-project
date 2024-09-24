#include<stdio.h>
int main(){

int n;
printf(" size :");
scanf("%d", &n);

int arr[n];
int sum = 24 ;

for(int i=0 ; i<n ; i++){

    scanf("%d",& arr[i]);

}
  
   for(int i=0 ; i<n-2 ; i++ ){

    for(int j =i+1 ; j<n-1 ; j++ ){

        for(int k = j+1 ; k<n ; k++){

            if ( arr[i] + arr[j] + arr[k] == sum ){

            printf(" triplet is %d + %d + %d == %d  ", arr[i] , arr[j] , arr[k] , sum);
          
           
           }

         }

     }

   }
  
 


return 0;

}