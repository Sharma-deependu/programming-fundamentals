#include <stdio.h>

void reverseArray(int arr[], int start, int end) {
    while (start < end) {
        // Swap elements at the start and end indices
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move indices towards the center
        start++;
        end--;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, n);

    // Reverse the order of the array
    reverseArray(arr, 0, n - 1);

    printf("Reversed array: ");
    printArray(arr, n);

    return 0;
}