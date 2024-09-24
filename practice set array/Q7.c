
#include<stdio.h>
int main(){
int n;
printf("ARRAY SIZE:");
scanf("%d",&n);
int arr[n];
printf("ARRAY\n");
int c=0,a=0;
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    if(arr[i]%2==0){
        c++;
    }
    else{
        a++;
    }
}
printf("element of even is %d\n",c);
printf("element of odd is %d",a);
    

return 0;
}