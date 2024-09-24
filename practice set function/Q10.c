#include<stdio.h>
void table(int  n){
    int i=1;
    int tabl=1;
    while(i<=10){
    tabl=n*i;
    i++;
    printf("%d\n",tabl);
    }
}
void input(){
    int no;
printf("enter your no");
scanf("%d",&no);
table(no);
}

int main(){
input();
return 0;
    

}