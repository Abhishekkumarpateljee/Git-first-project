
#include<stdio.h>
int main(){
int n;
printf("ARRAY SIZE:");
scanf("%d",&n);
int arr[n];
printf("ARRAY\n");
int c=0,a=0;
int sum=0,add=0;
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    if(arr[i]%2==0){
        c++;
        sum=sum+arr[i];
    }
    else{
        a++;
        add=add+arr[i];
    }
}
printf("average of element even is %d\n",sum/c);
printf(" average of element odd is %d",add/a);
    

return 0;
}