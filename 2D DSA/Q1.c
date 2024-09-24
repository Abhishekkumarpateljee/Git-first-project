#include<stdio.h>
int main(){
     int row;
     printf("ENTER YOUR ROW:");
     scanf("%d",&row);
     
     int column ; 
     printf("ENTER YOUR COLUMN:");
     scanf("%d",& column);

     int arr [row][column];
      
      for(int i=0 ; i<row ;i++){
        int j=0;
        for(; j<column ; j++){
            scanf("%d", & arr[i][j]);
        }
        
      }

      for(int i=0 ; i<row ;i++){
        int j=0;
        for(; j<column ; j++){
            printf("%d", arr[i][j]);
        }
        printf("\n");
      }

      return 0;


}
