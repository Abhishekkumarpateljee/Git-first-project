#include<stdio.h>
int main(){

   int row ;
   printf("enter your row");
   scanf("%d",&row);

   int column;
   printf("enter your column:");
   scanf("%d",&column);

  int arr[row][column];
    int product = 1;
  for(int i=0 ; i<row; i++){

    for(int j=0 ; j<column ; j++){
        scanf("%d",& arr[i][j]);
        product = product * arr[i][j];
    }


  }

printf("metrix\n");

for(int i=0 ; i<row; i++){

    for(int j=0 ; j<column ; j++){

        printf("%d",arr[i][j]);
        
    }
   printf("\n");

  }

  printf("total product : %d",product);

  
  

  return 0;



}