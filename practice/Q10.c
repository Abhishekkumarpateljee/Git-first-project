#include<stdio.h>
int main(){

int r = 2 , c=2 ;
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

int sumrows[r];
int sumcolumns[c] ;

for(int i =0 ; i<r ; i++){

    sumrows[i] = 0 ;
}

for(int i =0 ; i<c ; i++){

    sumcolumns[i] = 0 ;
}

for(int i=0 ; i<r ; i++){

    for(int j = 0 ; j<c ; j++){

        sumrows[i]    = sumrows[i]    + arr[i] [j] ;
        sumcolumns[j] = sumcolumns[j] + arr[i][j]  ;
    }
}

printf("  sum of each row :\n");
for(int i =0 ; i<r ; i++){

    printf("row%d:= %d ",i+1, sumrows[i]);
}

printf(" sum of each column :\n");
for(int i = 0 ; i<c ; i++){

    printf("column%d:=%d",i+1,sumcolumns[i]);
}

    return 0 ;
}