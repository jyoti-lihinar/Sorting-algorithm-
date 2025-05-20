
#include <stdio.h>

int main() {
    int n, i, j, temp, flag;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int a[n]; // Declare array after n is input

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);  // Input array elements
    }

    // Bubble Sort
    for(i = 0; i < n-1; i++) {
        flag = 0; // Reset flag
        for(j = 0; j < n-i-1; j++) { // Corrected loop condition
            if(a[j] > a[j+1]) {  // Fix comparison logic
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                flag = 1;
            }
        }
        // If no swapping occurs, array is already sorted
        if(flag == 0) {
            break;
        }
    }

    printf("Sorted array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    
    return 0;
}
