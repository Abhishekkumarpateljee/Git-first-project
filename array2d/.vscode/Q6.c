//Q6;
#include<stdio.h>
int main(){

int row;
printf("enter your row :");
scanf("%d",&row);

int column;
printf("enter your column :");
scanf("%d",&column);

int num;
printf("enter your no :");
scanf("%d",&num);

int arr [row] [column];

for(int i=0 ; i<row ; i++){

    for(int j=0 ; j<column ; j++){
    scanf("%d",& arr[i][j]);
    }
}

int c = 0 ;
for(int i=0 ; i<row ; i++){

    for(int j=0 ; j<column ; j++){

    if( arr[i][j] == num ){
        c++;
    }
    }
}

if(c>0){

    printf("%d is presnt in arr",num);
}

else{

    printf(" not present");
}



    return 0;
}
