#include<stdio.h>
int main(){

int n = 5 ;
int ar[n] ;

printf(" arr1 : \n ");
for(int i =0 ; i<n ; i++){

    scanf("%d",&ar[i]);
}
int s = 3;
int ar1[s] ;
   printf(" arr2 :\n");
for(int i=0 ; i<s ; i++ ){

    scanf("%d",&ar1[i]);
}

 int arr[n+s] ;
 int k=0 ;

 for(int i=0 ; i<n ; i++ ){

     arr[k++] = ar[i] ;
   }
     
     for(int i=0 ; i<s ; i++ ){
      
      int count = 0 ;

      for(int j =0 ; j<n ; j++){

        if(ar[i] == ar1[j]){

            count = 1 ;
            break; 
        }
      }
      
    if( count != 0 ){

        arr[k++] = ar1[i] ;

  
    }
   }

   for(int i =0 ; i<k ; i++ ){

       printf(" %d ", arr[i]);

         }
     
     return 0;
  }