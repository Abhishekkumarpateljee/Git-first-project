#include<stdio.h>
int rf(int i);
int rf(int i){
    if(i>=1){
        printf("%d\n",i);
        rf(i-1);
    }
    return 0;

}
int main(){
    int i=5;
    rf(i);
    return 0;
}