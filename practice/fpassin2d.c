#include<stdio.h>
void input(int rows , int columns , int arr[rows][columns] ){

printf("enter your elelments :\n");
for(int i =0 ; i<rows; i++){
   
   for(int j=0 ; j<columns ; j++){

      scanf("%d",&arr[i][j]);
    }
  } 
}

void output(int rows , int columns , int arr[rows][columns] ){

for(int i =0 ; i<rows; i++){
   
   for(int j=0 ; j<columns ; j++){

      printf("%d",arr[i][j]);
    }

    printf("\n");

  }
  
}

int main(){

int rows=3, columns = 3;

int arr[rows][columns] ;

input(rows,columns,arr);
output(rows,columns,arr);




    return 0;
}