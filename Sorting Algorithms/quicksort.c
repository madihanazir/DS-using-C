#include <stdio.h>

int a[] = {3, 90, 17, 2, 43};

void swap(int a[], int i, int j) {
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

int partition(int a[], int l, int h) {
    int pivot = a[l];
    int i = l;
    int j = h;

    while (i < j) {
        while (a[i] <= pivot && i <= h) {
            i++;
        }
        while (a[j] > pivot) {
            j--;
        }
        if (i < j) {
            swap(a, i, j);
        }
    }
    swap(a, l, j);
    return j;
}

void quicksort(int a[], int l, int h) {
    if (l < h) {
        int j = partition(a, l, h);
        quicksort(a, l, j - 1);
        quicksort(a, j + 1, h);
    }
}

int main() {
    int n = sizeof(a) / sizeof(a[0]);

    printf("Original Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    quicksort(a, 0, n - 1);

    printf("Sorted Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
