#include<stdio.h>
int main(){
int n;
printf("ARRAY SIZE:");
scanf("%d",&n);
int arr[n];
printf("array\n");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

for( int i = 0 ;i < n ; i++ ){

   printf(" %d ", arr [i]);
}
printf(" \n ");

int k;

printf("enter your no:");

scanf("%d",&k);

for(int i  = 0 ; i<n-1 ; i++){


    for(int j = i+1 ; j<n ; j++){

        if(arr[i] == k ){

        int temp  = arr[i]   ;
           arr[i] = arr[j] ;
           arr[j] = temp  ;

    }

    }
    
}

for(int i =0 ; i<n-1 ; i++){

    printf( " %d " , arr[i]);
}



return 0; 
}