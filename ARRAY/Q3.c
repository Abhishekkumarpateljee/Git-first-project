#include<stdio.h>
int main(){
    int n;
    printf("ARRAY SIZE;");
    scanf("%d",&n);
    int arr[n];
    printf("ARRAY\n");
    for(int i=0;i<n;i++){
        printf("ENTER YOUR ARRAY[1]");
        scanf("%d",&arr[i]);
    }
    int array[n];
    printf("ARRAY\n");
    for(int i=0;i<n;i++){
    printf("ENTER YOUR ARRAY[2]");
    scanf("%d",&array[i]);
    }
    int finalarray[array[n]];
    printf("%d",finalarray);
    
    return 0;
}