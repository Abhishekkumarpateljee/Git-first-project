#include<stdio.h>
int main(){

int n;
printf(" size :");
scanf("%d", &n);

int arr1[n];

for(int i=0 ; i<n ; i++){

    scanf("%d",& arr1[i]);

}

int m;
printf(" size :");
scanf("%d", &m);

int arr2[m];
printf(" arr2 :\n");

for(int i=0 ; i<m ; i++){

    scanf("%d",& arr2[i]);

}



int o;
printf(" size :");
scanf("%d", &o);

int arr3[o];
printf(" arr3 :\n");

for(int i=0 ; i<o ; i++){

    scanf("%d",& arr3[i]);

}

printf("Common elements: ");
    
    for(int i=0 , j=0 , k =0 ; i<n , j<m , k<o ; i++ , j++ , k++ ){
        
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k]) {
            printf("%d ", arr1[i]);
            
        }
        
        else if (arr1[i] < arr2[j])
        i++;
        else if (arr2[j] < arr3[k])
            j++;
        
        else
          k++  ;
    }


    printf("\n");



''
''''
''''
'

''

'



return 0;


}