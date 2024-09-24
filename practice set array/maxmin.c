#include<stdio.h>
int main(){

int n;
printf(" size :");
scanf("%d",&n);

int arr[n] ;

for(int i=0 ; i<n ; i++ ){

    scanf("%d",& arr[i]);
}

printf(" array :\n");

for(int i=0 ; i<n ; i++ ){

    printf(" %d ", arr[i]);
}

int max = arr[0] ;
int min = arr[0] ;

for(int i=0 ; i<n ; i++ ){

    if( arr[i] > max ){
        max = arr[i] ;
    }
    else{
        
        if( arr[i] < min ){

            min = arr[i] ;
        }
    }
}

printf(" max = %d min = %d  " , max , min );




}