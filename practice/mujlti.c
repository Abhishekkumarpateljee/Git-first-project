#include<stdio.h>
int main(){

int m ,n ,p ;
scanf("%d%d%d",&m,&n,&p);

int metrix1[m][n] , metrix2[n][p] , result[m][p] ;

printf("enter your elelments for 1st metrix \n");
for(int i=0 ; i<m ; i++){

    for(int j = 0 ; j<n ; j++){
       
       scanf("%d",&metrix1[i][j]);
        
    }
}

for(int i=0 ; i<m ; i++){

    for(int j = 0 ; j<n ; j++){
       
       printf("%d",metrix1[i][j]);
        
    }

    printf("\n");
}

printf("enter your elements for 2nd metrix\n");
for(int i=0 ; i<n ; i++){

    for(int j = 0 ; j<p ; j++){
       
       scanf("%d",&metrix2[i][j]);
        
    }
}
for(int i=0 ; i<n ; i++){

    for(int j = 0 ; j<p ; j++){
       
       printf("%d",metrix2[i][j]);
        
    }

    printf("\n");
}


for(int i=0 ; i<m ; i++){

    for(int j = 0 ; j<p ; j++){
       
       result[i][j] = 1 ;
        
    }
}

for(int i=0 ; i<m ; i++){

    for(int j = 0 ; j<n ; j++){
       
       for(int k =0 ; k<n ; k++ ){

        result[i][j] += metrix1[i][k]  * metrix2[k][j] ;
       }
        
    }
}

printf("result  metrix\n");
for(int i=0 ; i<m ; i++){

    for(int j = 0 ; j<p ; j++){
       
       printf(" %d ", result[i][j]);
        
    }

    printf("\n");
}


return 0;
}