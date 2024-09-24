#include<stdio.h>
int main(){

int r=2 ,c =2;
int arr[r][c] ;

for(int i=0 ; i<r ; i++){

   for(int j=0 ;j<c ; j++){

     scanf("%d",&arr[i][j]);
   }

}

 for(int i=0 ; i<r ; i++){

   for(int j=0 ;j<c ; j++){

     printf("%d",arr[i][j]);
   }
   printf("\n");
}

int sum =0 ;
for(int i = 0 ; i<r ; i++){
 
  for(int j =0 ; j<c ; j++ ){

    if( i == j){
        sum += arr[i][j] ;
    }

  }
    
}

printf(" main diagonal sum = %d ", sum);

int add = 0;
for(int i=0 ; i<r ; i++){

   for(int j=c-1 ;j>=0 ; j--){

     add += arr[i][j] ;
   }

}

printf("sum = %d",add) ;


    return 0;
}