
#include <stdio.h>

int main() {
    // 1D Array
    int arr1D[5] = {1, 2, 3, 4, 5};
    printf("1D Array elements:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr1D[i]);
    }
    printf("\n\n");

    // 2D Array
    int arr2D[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    printf("2D Array elements:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", arr2D[i][j]);
        }
        printf("\n");
    }

    return 0;
}
