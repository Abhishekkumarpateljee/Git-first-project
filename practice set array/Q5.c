#include<stdio.h>
int main(){
    int n;
    printf("ARRAY SIZE:");
    scanf("%d",&n);
    int arr[n];
    printf("ARRAY\n");
    int sum=0,avg;
    for(int i=0;i<n;i++){
        printf("ENTER YOUR ELEMENT[I]");
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    avg=sum/n;
    printf("%d",avg);
}