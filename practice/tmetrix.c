#include<stdio.h>
int main(){

int r = 3 , c = 2 ;

int arr[r][c] ;

for(int i=0 ; i<r ; i++){

    for(int j=0 ; j<c ; j++ ){

        scanf("%d",&arr[i][j]);
    }
}

for(int i=0 ; i<r ; i++){

    for(int j=0 ; j<c ; j++ ){

        printf("%d",arr[i][j]);
    }

    printf("\n");
}

int tmetrix [c][r] ;
for(int i=0 ; i<r ; i++){

    for(int j=0 ; j<c ; j++ ){
      
      tmetrix[j][i] = arr[i][j] ;
        
    }
}

printf("tmerix\n");

for(int i=0 ; i<c ; i++){

    for(int j=0 ; j<r ; j++ ){

        printf("%d",tmetrix[i][j]);
    }

    printf("\n");
}
    return 0;
}