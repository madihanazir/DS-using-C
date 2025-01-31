#include <stdio.h>

int n = 5;
int a[] = {1, 90, 4, 50, 25};

void swap(int i, int min) {
    int temp = a[min];
    a[min] = a[i];
    a[i] = temp;
}

void selection(int a[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        int min = i; // Moved the declaration of 'min' inside the outer loop
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        swap(i, min); // Call the swap function here
    }
}

int main() {
    selection(a, n);
    int k;
    for (k = 0; k < n; k++) {
        printf("%d ", a[k]);
    }
    return 0; // Added a return statement to indicate successful execution
}
