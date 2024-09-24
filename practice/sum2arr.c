#include<stdio.h>
int main(){

int r1 = 3 , c1 = 3;

int arr1[r1][c1] ;

for(int i=0 ; i<r1 ; i++){

    for(int j = 0 ; j<c1 ; j++){

        scanf("%d",&arr1[i][j]);
    }
}

for(int i=0 ; i<r1 ; i++){

    for(int j = 0 ; j<c1 ; j++){

        printf("%d",arr1[i][j]);
    }
    printf("\n");
}

 int r2 = 2 , c2 = 2;

int arr2[r2][c2] ;

for(int i=0 ; i<r2 ; i++){

    for(int j = 0 ; j<c2 ; j++){

        scanf("%d",&arr2[i][j]);
    }
}

for(int i=0 ; i<r2 ; i++){

    for(int j = 0 ; j<c2 ; j++){

        printf("%d",arr2[i][j]);
    }
    printf("\n");
}

int row = (r1 > r2) ? r1 : r2 ;
int column = (c1 > c2 ) ? c1 : c2 ;

 int sum [row][column];

 for(int i =0 ; i<row ; i++){

    for(int j =0 ; j<column ;j++){

       sum[i][j] = 0 ;
    }
 }

 for(int i =0 ; i<row ; i++){

    for(int j =0 ; j<column ;j++){

      if(i < r1 && j < c1 ){
         
         sum[i][j] += arr1[i][j] ;
      }
        
        if( i<r2 && j<c2 ){
            
            sum[i][j] += arr2[i][j] ;
        }
    }
 }


 for(int i =0 ; i<row ; i++){

    for(int j =0 ; j<column ;j++){

        printf(" %d ", sum[i][j]);
    }

    printf("\n");
 }





    return 0;
}