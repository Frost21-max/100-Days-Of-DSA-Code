#include <stdio.h>

int main() {
    int n, pos, x, size;

    printf("Enter the size of the array:\n");
    scanf("%d", &size);

    int arr[size];

    printf("Enter number of elements:\n");
    scanf("%d", &n);

    if (n > size) {
        printf("Number of elements exceeds array size\n");
        return 0;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter element %d:\n", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter position to delete (1-based):\n");
    scanf("%d", &pos);

    if (pos < 1 || pos > n) {
        printf("Invalid position\n");
        return 0;
    }

    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    printf("Updated array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
