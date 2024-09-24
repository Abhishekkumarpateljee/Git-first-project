#include <stdio.h>

int main() {
    int arr[] = {10, 90, 49, 2, 1, 5, 23};
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp;

    for (int i = 0; i < n; i += 2) {
        // If current even element is smaller than the previous element, swap
        if (i > 0 && arr[i] < arr[i - 1]) {
            temp = arr[i];
            arr[i] = arr[i - 1];
            arr[i - 1] = temp;
        }

        // If current even element is smaller than the next element, swap
        if (i < n - 1 && arr[i] < arr[i + 1]) {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }

    // Print the wave form sorted array
    printf("Wave form sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
