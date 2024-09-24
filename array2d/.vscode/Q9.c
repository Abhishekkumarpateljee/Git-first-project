//Q9;
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

        int max = arr[0][0] ;
        int min = arr[0][0] ;

        for(int i = 0 ; i<row ; i++ ){

            
        for(int j = 0 ; j<column ; j++ ){

            if( arr[i] [j] > max ){

               max = arr[i] [j] ;
             }

             
             if( arr[i] [j] < min ){

                min = arr[i] [j] ;
             }

           }
        }


    
    printf("max =  % d ",max );
    printf(" min = %d", min);
        
    return 0;
}