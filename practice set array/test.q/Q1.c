#include<stdio.h>
void input(int arr[],int size){
    printf("array\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
}
void output(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
}

int main(){
int n=4;
int arr[n];
input(arr,n);
output(arr,n);

int m=4;
int arr1[m];
input(arr1,m);
output(arr1,m);

int o=4;
int arr2[o];
input(arr2,o);
output(arr2,o);

    return 0;
}