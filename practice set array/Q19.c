

#include<stdio.h>
int main(){
    int n;
    printf("ARRAY SIZE:");
    scanf("%d",&n);

int arr[n];
printf("ARRAY\n");
for(int i=0;i<n;i++){
scanf(" %d ",& arr[i] );
}
 
 for(int i=0 ; i<n ; i++ ){
  printf(" %d ", arr[i]);
 }
 printf("desecending\n");
  
  for(int i=0 ; i<n ; i++){

    int j =i+1;
    for(;j<n;j++){
     if( arr[i] < arr[j] ){

     int temp = arr[i] ;
     arr[i]   = arr[j] ;
     arr[j]   = temp   ;
      
     }

    }
  }

  for(int i = 0 ; i<n ; i++){

    printf(" %d ", arr[i] );
  }




return 0;
}