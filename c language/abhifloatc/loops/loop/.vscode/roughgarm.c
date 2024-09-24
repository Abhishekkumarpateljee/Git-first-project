
#include <stdio.h>
int main() {
int no;
printf("enter youyr no:");
scanf("%d",&no);
int sum=0,rem,c=0,num=no,b,p;
for(;num!=0;num=num/10){
   c++;
   int count=c;
for(;num!=0;num=num/10){
   rem=num%10;
   for(;count!=0;count--){
      p=p*rem;
   }
   count=c;
   p=1;
   sum=sum+p;
}
}
printf("%d\n",sum);
   return 0;
}

