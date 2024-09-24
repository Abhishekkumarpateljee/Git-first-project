#include<stdio.h>
int main(){
int n;
printf("ARRAY SIZE:");
scanf("%d",&n);
int abb[n];
printf("ARRAY\n");
int sum=0,add=0;
for(int i=0;i<n;i++){
scanf("%d",&abb[i]);
if(abb[i]%2==0){
sum=sum+abb[i];
}
else{
add=add+abb[i];
}
}
printf("sum of odd=%d\n",add);
printf("sum of even =%d",sum);
    return 0;
}