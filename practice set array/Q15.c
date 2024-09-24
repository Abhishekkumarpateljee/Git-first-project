#include<stdio.h>
int main(){
int n;
printf("array size:");
scanf("%d",&n);
int arr[n];
printf("array\n");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int m;
printf("enter your index:");
scanf("%d",&m);
if(m<n && m>=0){
printf("%d",arr[m]);
}
else{
printf("invalid index");
}
return 0;
}