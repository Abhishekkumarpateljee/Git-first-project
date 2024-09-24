#include<stdio.h>
int main(){
    int n;
    printf("ARRAY SIZE:");
    scanf("%d",&n);
    int arr[n];
    printf("ARRAY\n");
    int sum=0;
    for(int i=0;i<n;i++){
    printf("enter your elelment[i]:");
    scanf("%d",&arr[i]);
    sum=sum+arr[i];
    }
    printf("sum=%d",sum);
    return 0;
}