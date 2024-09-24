#include<stdio.h>
int sum(int i){
    
    if(i==5){

        return 1;
    
    }

  
    
    return i+sum(i+i);

}

int main(){
    int i=1;
   int f=sum(i);
   printf("%d",f);


    return 0;
}