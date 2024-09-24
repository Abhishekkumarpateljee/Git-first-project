#include<stdio.h>
int count(int no){
    int c=0;
    while(no>0){
        c++;
        no=no/10;
    }
    return c;
}
int power(int a, int b){
    int i=1,p=1;
    while(i<=b){
        p=p*a;
        i++;
    }
    return p;
}
int armstrong(int no){
    int digit=count(no);
    int  temp=no;
    int sum=0;
   int rem=0;
   while (temp>0){
    rem=temp%10;
      sum=sum+power(rem,digit);
    temp=temp/10;
   }
   if(no==sum){
    printf("%d is armsrong no",no);
   }
   else{
    printf("%d is not armstrong no",no);
   }
    
return 0;

}
int main(){
    int no;
    printf("enter ypur no:");
    scanf("%d",&no);
   armstrong(no);
return 0;

    }
