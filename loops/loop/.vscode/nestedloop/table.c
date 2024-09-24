#include<stdio.h>
int main(){
int no;
printf("enter your no");
scanf("%d",&no);
int i=1;
for(i=1;i<=10;i++){
    int j=1;
    for(j=1;j<=no;j++){
        
        printf("%d,",i*j);
    }
    printf("\n");
}
return 0;
}