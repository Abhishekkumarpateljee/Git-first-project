#include<stdio.h>
int main(){
    int n=5;
    int arr[n];
    printf("array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int multieven=1,multiodd=1;
    for(int i=0;i<n;i++){
        if(i%2==0){
       multieven=multieven*arr[i];
        }
        else{
            multiodd=multiodd*arr[i];
        }
    }
    printf("even=%d",multieven);
    printf("odd=%d",multiodd);
    return 0;
}