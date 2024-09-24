#include<stdio.h>
int main(){
    int n;
    printf("ARRAY SIZE:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter your arr[n]:");
        scanf("%d",&arr[i]);
    }
    printf("ARRAY\n");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}