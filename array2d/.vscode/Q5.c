//Q5 ;
#include<stdio.h>
int main(){

    int row ;
    printf("enter your row :");
    scanf("%d",&row);

    int column;
    printf("ente your column:");
    scanf("%d",& column );

    int num;
     printf("enter your no :");
     scanf("%d",& num); 

     int index;


    int arr[row][column];

    for( int i=0 ; i<row ; i++){

        for( int j=0 ; j<column ;j++){

            scanf(" %d " , & arr[i][j]);

            
        }
    
    }

    printf("metrix :\n");

    for( int i=0 ; i<row ; i++){

        for( int j=0 ; j<column ;j++){

            printf(" %d " , arr[i][j]);
            
        }
        printf("\n");
    
    }

    for( int i=0 ; i<row ; i++){

        for( int j=0 ; j<column ;j++){

         if ( arr[i][j] == num ) {
            printf(" index : %d , %d ",i,j);
         }
            
        }
    }




    return 0;
}