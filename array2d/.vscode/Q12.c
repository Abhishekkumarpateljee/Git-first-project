#include<stdio.h>
int main(){
 int rows;
     printf("ENTER YOUR ROW:");
     scanf("%d",&rows);
     
     int columns ; 
     printf("ENTER YOUR COLUMN:");
     scanf("%d",& columns);

     int arr [rows][columns];
      
      for(int i=0 ; i<rows ;i++){
        int j=0;
        for(; j<columns ; j++){
            scanf("%d", & arr[i][j]);
        }
        
      }
       

      for(int i=0 ; i<rows ;i++){
        int j=0;
        for(; j<columns ; j++){
            printf("%d" , arr[i][j]);
        }
        printf("\n");
      }

       int transposed[columns][rows];

    // Transpose the matrix
    for (int i = 0; i < rows ; i++) {
        for (int j = 0; j < columns ; j++) {
            transposed[j][i] = arr [i][j];
        }
    }


           printf("\nTransposed Matrix:\n");
    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows ; j++) {
            printf("%d ", transposed[i][j]);
        }
        printf("\n");
    }
      return 0;
}