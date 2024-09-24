#include<stdio.h>
int main(){
    int n;
    printf("array size:");
    scanf("%d",&n);
    int arr[n];
    printf("ENTER YOUR NUMBER:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int abb[n];
    printf("enter your 2nd no:");
    for(int i=0;i<n;i++){
        scanf("%d",&abb[i]);
    }
    int add[n];
    printf("no\n");
    for(int i=0;i<n;i++){
        add[i]=arr[i]+abb[i];
        printf("%d\n",add[i]);
    }
    return 0;
}