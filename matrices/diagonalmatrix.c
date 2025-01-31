#include <stdio.h>

struct Matrix {
    int A[10];  // Array to store diagonal elements
    int n;      // Size of the matrix
};

// Function to set elements in the diagonal matrix
void Set(struct Matrix *m, int i, int j, int x) {
    if (i == j) {                                                                            
        m->A[i - 1] = x;  // Corrected index
    }
}

// Function to get elements from the diagonal matrix
int Get(struct Matrix m, int i, int j) {  
    if (i == j)
        return m.A[i - 1];  // Correct indexing
    else 
        return 0;
}

// Function to display the diagonal matrix
void display(struct Matrix m) {
    int i, j;
    for (i = 0; i < m.n; i++) {
        for (j = 0; j < m.n; j++) {
            if (i == j) {
                printf("%d ", m.A[i]);  // Correct indexing
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int main() {
    struct Matrix m;
    m.n = 4;
    
    // Setting diagonal elements
    Set(&m, 1, 1, 5);
    Set(&m, 2, 2, 8);
    Set(&m, 3, 3, 9);
    Set(&m, 4, 4, 12);
    
    // Getting and printing an element
    printf("%d\n", Get(m, 2, 2));  // Now correctly calls Get()

    // Displaying the diagonal matrix
    display(m);
    
    return 0;
}
