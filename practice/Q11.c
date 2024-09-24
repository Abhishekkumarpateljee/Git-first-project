#include<stdio.h>

int main() {

    int r;
    printf("Row = ");
    scanf("%d", &r);

    int c;
    printf("Column = ");
    scanf("%d", &c);

    int arr[r][c];

    printf("Enter elements of the array:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Array elements are:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    int count = 1, repeat = -1, found = 0;

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            for(int k = 0; k < r; k++) {
                for(int l = 0; l < c; l++) {
                    if(i == k && j == l) 
                    
                     continue; // Skip the same element
                    if(arr[i][j] == arr[k][l]) {
                        count++;
                        repeat = arr[i][j];
                        found = 1;
                        
                    }
                }
                
            }
            if(found) break;
        }
        if(found) break;
    }

    if(found) {
        printf("First repeated element = %d\n", repeat);
        printf("Repeated times = %d\n", count);
    } else {
        printf("No repeated elements\n");
    }

    return 0;
}
