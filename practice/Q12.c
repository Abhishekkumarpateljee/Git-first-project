#include<stdio.h>
int main(){

int r = 3 , c=2 ;
int arr[r][c] ;

for(int i=0 ; i<r ; i++){

    for(int j = 0 ; j<c ; j++){

        scanf("%d",&arr[i][j]);
    }
}

for(int i=0 ; i<r ; i++){

    for(int j = 0 ; j<c ; j++){

        printf("%d",arr[i][j]);
    }
    printf("\n");
}

int t_metrix[c][r] ;

for(int i=0 ; i<r ; i++){

    for(int j = 0 ; j<c ; j++){

    t_metrix [j][i] = arr[i][j] ;
    }
    
} 

for(int i=0 ; i<c ; i++){

    for(int j = 0 ; j<r ; j++){
     
     printf(" %d ",t_metrix[i][j]);
    }
    printf("\n");
} 



return 0;

}