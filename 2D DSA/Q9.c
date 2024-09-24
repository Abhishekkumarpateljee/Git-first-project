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

int transpose[column][row] ;

for(int i=0 ; i<row ; i++ ){

    for(int j=0 ; j<column ; j++ ){
    
    transpose [j] [i] = arr[i] [j] ;
    }
    
}

 printf(" transpose\n");
for(int i=0 ; i<row ; i++ ){

    for(int j=0 ; j<column ; j++ ){
    printf("%d",transpose[i][j]);

    }
    printf("\n");
}


    return 0;
}