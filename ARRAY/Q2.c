#include<stdio.h>
int main(){
    int n;
    printf("ARRAY SIZE:");
    scanf("%d",&n);
    int arr[n];
    printf("array\n");
     int sum=0,avg;
    for(int i=0;i<n;i++){
        printf("enter your array[n]:");
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    avg=sum/n;
    printf("average is %d",avg);
    

    return 0;
}