#include <stdio.h>
int main(){
    int no;
    scanf("%d",&no);
    int n=no;
    int rem,rev;
    for(rem=0,rev=0;no>0;no=no/10){
        rem =no%10;
        rev=rev*10+rem;
    }
    if(n==rev){
        printf("pallindrome");
    }
    else{
        printf("not pallin");
    }

    
    return 0;
}