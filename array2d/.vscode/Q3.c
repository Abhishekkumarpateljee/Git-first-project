#include<stdio.h>
int main(){
int row;
printf("enter your row:");
scanf("%d",&row);

int column;
printf("ente your column:");
scanf("%d",&column);

int arr[row] [column];
int sum=0;
for(int i=0 ; i<row ; i++ ){

    
    for( int j = 0 ; j<column ; j++){
        scanf("%d",&arr[i][j]);

        sum = sum + arr [i][j];
    }

   

}
printf("Metrix :\n");
for(int i=0 ; i<row ; i++ ){

    
    for( int j = 0 ; j<column ; j++){
        printf("%d",arr[i][j]);

        
    }
    printf("\n");
   

}

printf(" total sum :%d",sum);

    return 0;
}