#include<stdio.h>
int main(){
int n=5;
int arr[n];
printf("array\n");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

int m=4;
int arr1[n];
printf("array\n");
for(int i=0;i<m;i++){
    scanf("%d",&arr1[i]);
}
int c=0,count=0;
for(int i=0;i<n;i++){
    if(arr[i]%2==0 ){
    c++;
    }
    if(arr1[i]%2==0){
        count++;
    }

}
int no= c+count;
printf("even c=%d",count);


    return 0;
}