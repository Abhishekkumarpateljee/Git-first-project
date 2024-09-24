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
int check=0;
for( int i = 0 ; i<n; i++ ){
 
 if( arr[i] == k  ){
    
   
    arr[i]   = arr[i+1];
   
   check=1;

 }
 if(check==1 && i!=n-1){
    arr[i]   = arr[i+1];
 }

}
for(int i=0 ; i<n-1 ; i++ ){
printf(" %d ",arr[i]);
   
}





return 0;
}