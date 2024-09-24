#include<stdio.h>
void input(int r, int c, int arr[r][c]){
  printf("enter your elelment :");
  for(int i=0 ; i<r ; i++){
    
    for( int j=0 ; j<c ; j++ ){
    scanf("%d",&arr[i][j]);
    }
  }

}

void output(int r, int c, int arr[r][c]){
  printf("metrix:\n");
  for(int i=0 ; i<r ; i++){
    
    for( int j=0 ; j<c ; j++ ){
       printf("%d",arr[i][j]);
    }
    printf("\n");
  }

}


int main(){
 int r;
 printf("row :");
 scanf("%d",&r);

 int c;
 printf("column:");
 scanf("%d",&c);

 int arr[r][c];
 input(r,c,arr);
 output(r,c,arr);

 return 0;
}