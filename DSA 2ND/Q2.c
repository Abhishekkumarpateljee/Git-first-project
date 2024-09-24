#include<stdio.h>
int main(){

int n;
printf(" size :");
scanf(" %d ",&n);

int arr[n] ;

for(int i=0 ; i<n ; i++ ){

    scanf("%d",&arr[i]);
}
 
 int max1 = arr[0] ;
 int max2 = arr[0];
 int min1 = arr[0]  ;
 int min2 = arr[0] ;

 for(int i=1 ; i<n ; i++ ){

     if( arr[i] > max1){

        max1 = arr[i] ;

        }

    }

 for(int i=1 ; i<n ; i++ ){
    
    if(arr[i] < max1 && arr[i] > max2 ){

       max2 = arr[i] ;
    }

    
   }
   printf(" max2 = %d \n", max2 );

  for(int i=1 ; i<n ; i++ ){

       if( arr[i] < min1) {

        min1 = arr[i] ;
       }
    }

       for(int i=1 ; i<n ; i++ ){

        if (arr[i] > min1 && arr[i] < min2){

            min2 = arr[i] ;
         }
       }
    printf(" min2 = %d ", min2);

    return 0;
}