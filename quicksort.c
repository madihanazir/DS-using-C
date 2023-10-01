#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void SelectionSort(int A[], int n) {
    int i, j, k;

    for (i = 0; i < n - 1; i++) {
        for (j = k = i; j < n; j++) {
            if (A[j] < A[k])
                k = j;
        }
        swap(&A[i], &A[k]);
    }
}

int main() {
    int A[100], n, i;

    printf("Enter the number of elements (up to 100): ");
    scanf("%d", &n);

    if (n > 100 || n < 1) {
        printf("Invalid input. Please enter a number between 1 and 100.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    SelectionSort(A, n);

    printf("Sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
