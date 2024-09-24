#include<stdio.h>
void input(int arr[],int size){
  printf("ARRAY :\n");
  
  for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
  }
  }
  void output(int arr[],int size){
  
  for(int i=0;i<size;i++){
    printf("%d",arr[i]);
  }
  }
  int main(){
  int size1;
  printf("array1 size1:");
  scanf("%d",&size1);
  int arr1[size1];
  input(arr1,size1);
  output(arr1,size1);
  printf("\n");

  int size2;
  printf("array2 size2:");
  scanf("%d",&size2);
  int arr2[size2];
  input(arr2,size2);
  output(arr2,size2);
printf("\n");
  int size3;
  printf("array3 size3:");
  scanf("%d",&size3);
  int arr3[size3];
  input(arr3,size3);
  output(arr3,size3);


    return 0;
  }
