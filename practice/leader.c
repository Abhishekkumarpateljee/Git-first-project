#include<stdio.h>
int main(){

int n;
printf("size :");

scanf("%d",&n);

int arr[n];

for(int i=0 ; i<n ; i++){
   
   scanf("%d",&arr[i]);

}

int maxfright = arr[n-1] ;

printf(" leaders = %d ", maxfright);

for(int i=n-2 ; i>=0 ; i-- ){

    if(arr[i] > maxfright ){

        maxfright = arr[i] ;

        printf(",%d",maxfright);
    }
}






    return 0;
}