#include <stdio.h>

int main() {
    int n, pos, x, size;

    printf("Enter the size of the array:\n");
    scanf("%d", &size);

    int arr[size];

    printf("Enter number of elements:\n");
    scanf("%d", &n);

    if (n >= size) {
        printf("Array is full\n");
        return 0;
    }

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position and element:\n");
    scanf("%d %d", &pos, &x);

    if (pos < 1 || pos > n + 1) {
        printf("Invalid position\n");
        return 0;
    }

    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = x;
    n++;

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
