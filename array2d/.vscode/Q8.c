//Q8;
#include<stdio.h>
int main(){

int row;
printf("enter your row :");
scanf("%d",&row );

int column;
printf("enter your column :");
scanf("%d",&column ) ;

int arr[row] [column] ;

for(int i=0 ; i<row ; i++ ){

    for(int j=0 ; j<column ; j++ ){
    scanf("%d",&arr[i][j]);

    }
}
printf("metrix\n");

for(int i=0 ; i<row ; i++ ){

    for(int j=0 ; j<column ; j++ ){
    printf("%d",arr[i][j]);

    }
    printf("\n");
}

int r ;
printf("row:");
scanf("%d",&r);

int c;
printf("column :");
scanf("%d",&c);

int arr2[r][c];

for(int i=0 ; i<r ; i++){

for(int j=0 ; j<c ; j++ ){

    scanf("%d",&arr2[i][j]);
}
}

for(int i=0 ; i<r ; i++){

for(int j=0 ; j<c ; j++ ){

    printf("%d",arr2[i][j]);
}
printf("\n");
}
int count =0 ;
for(int i=0 ; i<r ; i++){

    for(int j=0 ; j<c ; j++ ){

        if(arr[i] [j] == arr2[i][j]){
            count++;
        }
        
    }
}
if(count == r*c){
    printf("metrix are same ");
}
else{

    printf("metrix ar not same :");
}



return 0;
}