#include<stdio.h>
int main(){
int n;
printf("ARRAY SIZE:");
scanf("%d",&n);
int arr[n];
printf("ARRAY\n");
for(int i=0;i<n;i++){
    printf("enter your elelment[i]");
    scanf("%d",&arr[i]);
}
for(int i=n-1;i>=0;i--){
    printf("%d",arr[i]);
}
return 0;
}