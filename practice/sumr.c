#include<stdio.h>
int main(){

int r;
printf("row :");
scanf("%d",&r);

int c;
printf("column:");
scanf("%d",&c);

int arr[r][c];

for(int i=0 ; i<r ; i++){

    for(int j = 0 ; j<c ; j++){

        scanf("%d",&arr[i][j]);
    }
}
for(int i=0 ; i<r ; i++){

    for(int j = 0 ; j<c ; j++){

        printf("%d ",arr[i][j]);
    }
    printf("\n");
}
int sum;

for(int i=0 ; i<r ; i++){
    
    sum = 0 ;
    for(int j = 0 ; j<c ; j++){
       
       sum += arr[i][j] ;
        
    }

    printf(" row%d = %d ", i+1 ,sum);
}

printf("\n");

for(int i=0 ; i<c ; i++){
     sum = 0 ;
    for(int j = 0 ; j<r ; j++){

         sum += arr[j][i] ;
    }

    printf("column%d = %d ",i+1,sum);
}


    return 0;
}