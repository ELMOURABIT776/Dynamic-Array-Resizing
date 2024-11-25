#include <stdio.h>
#include <stdlib.h>

int main() {
    int size, new_size;


    printf("Enter the initial size of the array: ");
    scanf("%d", &size);


    int *arr = (int*)malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }


    printf("Enter elements for the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }


    printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");


    printf("Enter the new size of the array: ");
    scanf("%d", &new_size);


    arr = realloc(arr, new_size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }


    printf("Enter new elements for the resized array:\n");
    for (int i = size; i < new_size; i++) {
        scanf("%d", &arr[i]);
    }


    printf("Resized Array: ");
    for (int i = 0; i < new_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");


    free(arr);

    return 0;
}
