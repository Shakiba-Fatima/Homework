#include <stdio.h>

int linearSearch(int arr[], int size, int target) {
   
    for (int i = 0; i < size; i++) {
        
        if (arr[i] == target) {
            return i;  
        }
    }
    return -1;  
}

int main() {
    int n, target;
    
   
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];  

   
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter the element to search for: ");
    scanf("%d", &target);

    
    int result = linearSearch(arr, n, target);

    if (result != -1) {
        printf("Element found at index %d.\n", result);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}
/*
Enter the number of elements in the array: 3
Enter the elements of the array:
3 4 6
Enter the element to search for: 4
Element found at index 1.
*/
