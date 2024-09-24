#include<stdio.h>
int main(){

int n; 
printf(" size :");
scanf("%d",&n);

int arr[n];

printf("arr\n");

for(int i=0 ; i<n ; i++ ){

    scanf("%d",&arr[i]);
}

for(int i=0 ; i<n ; i++ ){

    printf("%d",arr[i]);
}

int repeat_element ;
int c = 0 ;

for(int i=0 ; i<n ; i++ ){

    for(int j = i+1 ; j<n ; j++){

        if( arr[i] == arr[j] ){

          printf(" first repeat = %d ",arr[i]);
            c = 1;
            break;
            
            
        }
    }

    if( c == 1 ){

        break;
    }
}

if( c == 0 ){

    printf(" not repeating element ");
}





return 0;

}