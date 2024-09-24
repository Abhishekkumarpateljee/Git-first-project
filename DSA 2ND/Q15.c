#include<stdio.h>
int main(){

int n;
printf(" size :");
scanf("%d",&n);

int arr[n] ;

for(int i=0 ; i<n ; i++ ){

    scanf("%d",& arr[i]);
}
 
 int maxp = arr[0] ;
 int curp =  1;

 for(int i =0 ; i<n ; i++ ){

    curp =1 ;

    for(int j = i ; j<n ; j++ ){

        curp = curp * arr[j] ;

        if( curp > maxp){

            maxp = curp ;

        }
    }
 }

 printf(" maxp = %d " , maxp) ;
 
    return 0;
}