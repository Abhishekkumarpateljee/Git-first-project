#include<stdio.h>
int main(){

int n; 
printf("array size :");
scanf("%d",&n); 

int arr[ n] ;
int sum = 0 ;


for(int i =0 ; i<n ; i++ ){
    scanf("%d",& arr[i] );
    sum = sum + arr[ i ];

}

printf("sum = %d",sum);

    return 0 ;
}