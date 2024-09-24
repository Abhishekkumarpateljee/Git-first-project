#include<stdio.h>
int main(){
    int n;
    printf("ARRAY SIZE:");
    scanf("%d",&n);
    int arr[n];
    printf("ARRAY\n");
   int  product=1;
    for(int i=0;i<n;i++){
        printf("enter your arr[i]:");
        scanf("%d",&arr[i]);
    product=product*arr[i];
    }
    printf("%d",product);
    return 0;
}