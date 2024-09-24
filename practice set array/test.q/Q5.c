#include<stdio.h>
int main(){
int n=6;
int arr[n];
printf("array\n");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(int i=0;i<n-4;i++){
    printf("%d",arr[i]);
}
for(int i=n-1;i>=2;i--){
    printf("%d",arr[i]);
}
printf("%d",arr[2]);
    return 0;
}