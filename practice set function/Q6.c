#include<stdio.h>
int sum(int x, int y){
  int add=x+y;
  printf("%d",add);
  return add ;
}
void input(){
  int x;
  printf("enter your x:");
  scanf("%d",&x);
  int y;
  printf("enter your y:");
  scanf("%d",&y);
 sum(x,y);
}

int main(){
input();
return 0;
}