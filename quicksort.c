#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int arr[n];
    
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        int pivot = arr[i];
        int p = i + 1;
        int q = n - 1;

        while (p <= q) {
            while (p <= q && arr[p] <= pivot) p++;
            while (p <= q && arr[q] > pivot) q--;
            if (p < q) {
                int temp = arr[p];
                arr[p] = arr[q];
                arr[q] = temp;
            }
        }
        arr[i] = arr[q];
        arr[q] = pivot;
    }

    
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
/*
Enter n: 4
Enter the elements: 7
8
5
2
Sorted array: 5 2 7 8
*/
