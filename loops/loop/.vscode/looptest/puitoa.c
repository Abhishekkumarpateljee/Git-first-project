#include<stdio.h>
int main(){
    char alpha;
    scanf("%c",&alpha);
    int lterm='a';
    int alphabet=0;
    for(int i=1;i<=lterm;i++){
        alphabet=alpha-i;
        printf("%c\n",alphabet);
    }
    return 0;
}