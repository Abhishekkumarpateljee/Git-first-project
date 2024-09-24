#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    int valid_count = 0;

    printf("Enter the elements (only 0 or 1 allowed):\n");
    for(int i = 0; i < n; i++) {
        int num;
        
        scanf("%d", &num);

        if(num == 0 || num == 1) {
            arr[valid_count] = num;
            valid_count++;
        } else {
            printf("%d is invalid.\n", num);
            i--;
        }
    }

    printf("arr - [");
    for(int i = 0; i < valid_count; i++) {
        printf("%d", arr[i]);
        if (i < valid_count - 1) {
            printf(",");
        }
    }
    printf("]\n");

    return 0;
}
