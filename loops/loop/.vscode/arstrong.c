
#include <stdio.h>
int main() {
int no;
printf("enter youyr no:");
scanf("%d",&no);
int sum=0,rem,c=0,num=no,b;
while(num!=0){
   c++;
while(num!=0){
   rem=num%10;
   int p=1,i=1;
   while(i<=c){
      p=p*rem;
      i++;
   }
   sum=sum+p;
   num=num/10;
}
num=num/10;
}
printf("%d",sum);
   return 0;
}

