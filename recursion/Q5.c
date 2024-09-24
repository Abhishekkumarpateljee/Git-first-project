#include<stdio.h>
int multiple(int b,int p,int i,int mult){
if(i<=p){
  mult =mult*b; 
printf("%d\n",mult);
multiple(b,p,i++,mult);

}
return 0;

}

int main(){
    int ba;
    printf("enter your b:");
    scanf("%d",&ba); 

    int po;
    printf("enter your p:");
    scanf("%d",&po);
    int multi=1;
    int a=1;
   int f= multiple(ba,po,a,multi);
   printf("%d\n",f);
    return 0;

}