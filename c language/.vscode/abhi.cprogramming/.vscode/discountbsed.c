#include<stdio.h>
int main(){
 int ms;
 printf("enter membership spend:");
 scanf("%d",&ms);
 int nms;
 printf("enter non memebership spend:");
 scanf("%d",&nms);
 if(ms==100){
printf("get 10perc discount");
if(nms==150){
printf("get 5perc discount");
}
}
else{
printf("änother get no discount");
}



    return 0;
}
