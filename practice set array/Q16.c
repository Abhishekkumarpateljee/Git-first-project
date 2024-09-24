
// Write a program to take an array and take a number from user and
//check if the given number is present in the array or not
#include<stdio.h>
int main(){
    int n;
    printf("ARRAY SIZE:");
    scanf("%d",&n);
    int arr[n];
    int no;
    printf("enter your no:");
    scanf("%d",&no);
    printf("ARRAY\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

        if(no==arr[i]){
        printf("%d is present in the array",no);
        }
            
    }
    
    return 0;
}