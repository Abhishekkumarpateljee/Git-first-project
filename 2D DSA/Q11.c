#include<stdio.h>
int main(){

int row;
printf("row:");
scanf("%d",&row);

int column;
printf("column:");
scanf("%d",&column);

int arr[row] [column] ;

for(int i=0 ; i<row ; i++){

    for(int j=0 ; j<column ; j++ ){

    scanf("%d",&arr[i] [j]);

    }

}

printf("metrix\n");

for(int i=0 ; i<row ; i++){

    for(int j=0 ; j<column ; j++ ){

    printf("%d",arr[i][j]);
    
    }

printf("\n");
}

for(int i =0 ; i<row ; i++ ){

    for(int j =0 ; j<column ; j++ ){

        for(int k = 0 ; k<row ; k++ ){

            
        for(int l = 0 ; l<column ; l++ ){

            if( arr[i] [j] < arr[k] [l]){

                int temp = arr[i] [j] ;
                arr[i] [j] = arr[k][l] ;
                arr[k] [l] = temp ;
            }
        }
        }


    }
}
for(int i=0 ; i<row ; i++){

    for(int j=0 ; j<column ; j++ ){

    printf(" %d ",arr[i] [j]);
        }
        printf("\n");
    }

    for(int i=0 ; i<row ; i++ ){

        for(int j=0 ; j<column ;  j++ ){

         if ( i ==0 && j == 0 ){
            printf("SMALLEST = %d ", arr[i] [j]);
         }

         else{

            if( i == row-1 && j == column-1 ){

                printf("LARGEST = %d", arr[i] [j]);
            }
         }
        }
    }
    






    return 0;
}