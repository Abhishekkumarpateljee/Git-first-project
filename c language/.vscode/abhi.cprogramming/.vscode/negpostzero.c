#include<stdio.h>
int main(){
int a;
scanf("%d",&a);
if(a<18){
printf("minor");
}
if(a>60){
printf("oldage");
}
if(a>=18){
 printf("adult");

}
    return 0;
}