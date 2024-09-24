#include<stdio.h>
void input(int arr[],int size ){
 for(int i=0;i<size;i++){
 printf("enter array element:");
 scanf("%d",&arr[i]);
 }
 
 }
 void output(int arr[],int size){
for(int i=0;i<size;i++)
printf("%d",arr[i]);
 }


int main(){
int size;
printf("ARRAY SIZE:");
scanf("%d",&size);
int arr[size];
input(arr,size);
output(arr,size);
return 0;
}