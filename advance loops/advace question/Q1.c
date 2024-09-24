#include<stdio.h>
int main(){
int no1;
printf("enter your num;");
scanf("%d",&no1);
int no2;
printf("enter your no;");
scanf("%d",&no2);
while(no1<=no2){
    if(no1%2==0){
        printf("%d=Coding,",no1);
    }
    else{
        printf("%d=Age",no1);
    }
    printf("\n");
    no1++;
}
return 0;
}