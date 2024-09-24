#include<stdio.h>
int main(){
    int n;
    printf("ARRAY SIZE:");
    scanf("%d",&n);
    int a[n];
    printf("ARRAY\n");
    int i=0;
    for(i;i<n;i++){
        printf("enter your a[i]");
        scanf("%d",&a[i]);
    }
    int b[n];
    printf("array\n");
    for(i=0;i<n;i++){
    printf("enetr your b[i]");
    scanf("%d",&b[i]);
    }
    int add[n];
    printf("array\n");
    for(int a=0;a<n;a++){
     printf("enter your add[i];");
     add[i]=a[i]+b[i];
    }


    return 0;
}