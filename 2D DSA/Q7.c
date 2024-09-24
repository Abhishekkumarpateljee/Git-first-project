 #include<stdio.h>
 int main(){
 
 int row ;
   printf("enter your row");
   scanf("%d",&row);

   int column;
   printf("enter your column:");
   scanf("%d",&column);

  int arr[row][column];
    
  for(int i=0 ; i<row; i++){

    for(int j=0 ; j<column ; j++){

        scanf("%d",& arr[i][j]);
    
    }


  }

  int k ;
  printf(" enter your no :");
  scanf("%d",&k);

  for(int i=0 ; i<row; i++){

    for(int j=0 ; j<column ; j++){

        if( arr[i][j] == k ){

            printf(" %d is present on index %d , %d ", arr[i][j] , i , j);
        }
    
    }


  }

  return 0;
 }