#include<stdio.h>
int main(){
int n;
printf("ARRAY SIZE:");
scanf("%d",&n);

int arr[n];
printf("array:\n");
for(int i=0 ; i<n ; i++ ){
scanf("%d",&arr[i]);
}
int r = -1 ;
int c=0 ;
int found =0 ; 
for(int i=0 ; i<n ; i++ ){

    for(int j = i+1; j<n ; j++){

        if(arr[i] == arr[j]){

            r = arr[i] ;
            c++;

            found =1;

            
        }
    }

    if(found > 0){
        break;
    }
    
}

if(found > 0){

    printf(" repeat = %d repeat t = %d ", r , c);
}

else{

    printf(" no repeat ");
}






return 0;

}