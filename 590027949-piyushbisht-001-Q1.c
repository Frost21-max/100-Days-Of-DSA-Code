#include <stdio.h>
int main() {
    int n, pos, x,size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d %d", &pos, &x);

    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = x;

    for (int i = 0; i <= n; i++) {
        printf("%d", arr[i]);
        if (i < n) printf(" ");
    }
    printf("\n");

    return 0;
}