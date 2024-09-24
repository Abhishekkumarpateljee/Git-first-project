#include<stdio.h>
int main(){

  int n;
  printf(" size :");
  scanf("%d", &n);

   int arr[n];

      for(int i=0 ; i<n ; i++){

    scanf("%d",& arr[i]);

  }

     for(int i=0 ; i<n ; i++){

       printf("%d", arr[i]);

     }
     int d = 2 ;

    // Temporary array to store the first d elements
    int temp[d];

    // Step 1: Store the first d elements in a temporary array
    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }

    // Step 2: Shift the remaining elements of the array to the left by d positions
    for (int i = 0; i < n - d; i++) {
        arr[i] = arr[i + d];
    }

    // Step 3: Copy the elements from the temporary array to the end of the original array
    for (int i = 0; i < d; i++) {
        arr[n - d + i] = temp[i];
    }

    // Print the rotated array
    printf("Rotated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

  
    