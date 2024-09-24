#include<stdio.h>
int main(){

int row;
printf("enter your row :");
scanf("%d",&row );

int column;
printf("enter your column :");
scanf("%d",&column ) ;

int arr[row] [column] ;

for(int i=0 ; i<row ; i++ ){

    for(int j=0 ; j<column ; j++ ){
    scanf("%d",&arr[i][j]);

    }
}
printf("metrix\n");

for(int i=0 ; i<row ; i++ ){

    for(int j=0 ; j<column ; j++ ){
    printf("%d",arr[i][j]);

    }
    printf("\n");
}

int sumrows[row];

for(int i=0 ; i<row ; i++ ){
    sumrows [i] = 0 ;
}

int sumcols[column] ;

for(int i =0 ; i<column ; i++ ){

    sumcols[i] = 0 ;
}

for(int i=0 ; i<row ; i++ ){

    for(int j=0 ; j<column ; j++ ){
    
    sumrows[i] = sumrows[i] + arr[i][j] ;
    sumcols[j] = sumcols[j] + arr[i][j] ;

    }
    printf("\n");
}

printf("Sum of each row:\n");
    for(int i = 0; i < row; i++) {
        printf("Row %d: %d\n", i+1, sumrows[i]);
    }

printf("Sum of each columns:\n");
    for(int i = 0; i < column; i++) {
        printf("cols %d: %d\n", i+1, sumcols[i]);
    }





    return 0;
}