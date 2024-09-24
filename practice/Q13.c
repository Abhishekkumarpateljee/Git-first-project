#include<stdio.h>
int main(){

int r1 = 2 , c1=2 ;
int arr1[r1][c1] ;

for(int i=0 ; i<r1 ; i++){

    for(int j = 0 ; j<c1 ; j++){

        scanf("%d",&arr1[i][j]);
    }
}

for(int i=0 ; i<r1 ; i++){

    for(int j = 0 ; j<c1 ; j++){

        printf("%d",arr1[i][j]);
    }
    printf("\n");
}

int r2 = 2 , c2=2 ;
int arr2[r2][c2] ;

for(int i=0 ; i<r2 ; i++){

    for(int j = 0 ; j<c2 ; j++){

        scanf("%d",&arr2[i][j]);
    }
}

for(int i=0 ; i<r2 ; i++){

    for(int j = 0 ; j<c2 ; j++){

        printf("%d",arr2[i][j]);
    }
    printf("\n");
}


int result[r2][c1] ;

if(c1 != r2){
    printf("can't be multiplied :");
    return 0;
}

for(int i=0 ; i<r1 ; i++){

    for(int j = 0 ; j<c2 ; j++){

        result[i][j] = 0 ;

          for(int k =0 ; k<c1 ; k++){

            result[i][j] += arr1[i][k] * arr2[k][j] ;
          }
    }
}

printf("\n");
for(int i =0 ; i<r1; i++){

    for(int j =0 ; j<c2 ; j++){

        printf("%d ", result[i][j]);
    }
    printf("\n");
}


    return 0;
}