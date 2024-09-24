#include<stdio.h>
int main(){
int n;
printf("ARRAY SIZE:");
scanf("%d",&n);
int b[n];
printf("array\n");
for(int i=0;i<n;i++){
  printf("enter your b[n]:");
  scanf("%d",&b[i]);
}
for(int i=n-1;i>=0;i-- ){
    printf("%d",b[i]);
}
return 0;
}