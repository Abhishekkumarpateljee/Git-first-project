#include<stdio.h>
int main(){

int row1;
printf("row:");
scanf("%d",&row1);

int column1;
printf("column:");
scanf("%d",&column1);

int arr1[row1] [column1] ;

for(int i=0 ; i<row1 ; i++){

    for(int j=0 ; j<column1 ; j++ ){

    scanf("%d",&arr1[i] [j]);

    }

}

printf("metrix\n");

for(int i=0 ; i<row1 ; i++){

    for(int j=0 ; j<column1 ; j++ ){

    printf("%d",arr1[i][j]);
    
    }

printf("\n");
}

int row2;
printf("row:");
scanf("%d",&row2);

int column2;
printf("column:");
scanf("%d",&column2);

int arr2[row2] [column2] ;

for(int i=0 ; i<row2 ; i++){

    for(int j=0 ; j<column2 ; j++ ){

    scanf("%d",&arr2[i] [j]);

    }

}

printf("metrix\n");

for(int i=0 ; i<row2 ; i++){

    for(int j=0 ; j<column2 ; j++ ){

    printf("%d",arr2[i][j]);
    
    }

printf("\n");
}

if( column1 != row2){
  
  printf(" can't be multiplied ");
  return 0;
}

int result[row1][column2];

for(int i=0 ; i<row1 ; i++){

    for(int j =0 ; j<column2 ; j++){

         result[i][j] = 1;

        for(int k =0 ; k<column1 ; k++){

           result[i][j] += arr1[i][k] * arr2[k][j] ;
        }
    }
}

for(int i=0 ; i<row1 ; i++){

    for(int j =0 ; j<column2 ; j++){

        printf("%d",result[i][j]);
    }

    printf("\n");
}



    return 0;
}