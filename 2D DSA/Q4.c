#include<stdio.h>
int main(){
int metrix1[3][3] = {

  { 1 , 2 , 3 },
  { 4 , 5 , 6 },
  { 7 , 8 , 9 }

} ;

int metrix2[3][3] = {

  { 1 , 2 , 3 },
  { 4 , 5 , 6 },
  { 7 , 8 , 9 }

} ;

int sum [3][3] ;

for(int i=0 ; i<3 ; i++){

    for(int j=0 ; j<3 ; j++){

        sum [i][j] = metrix1 [i][j] + metrix2 [i][j] ;
    
    }

}


  for(int i=0 ; i<3 ; i++){

     for(int j=0 ; j<3 ; j++){

        printf(" %d ", sum[i][j]);
    
    }

    printf("\n");
     
  }






return 0;
}