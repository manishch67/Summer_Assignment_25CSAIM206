// Q56	Write a program to Find duplicates in array.

#include <stdio.h>

int main() {
    int arr[100], n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Duplicate elements are: ");

    for(int i = 0; i < n; i++) {
        int isDuplicate = 0;

        for(int k = 0; k < i; k++) {
            if(arr[i] == arr[k]) {
                isDuplicate = 1;
                break;
            }
        }

        if(isDuplicate)
            continue;

        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break;
            }
        }
    }

    return 0;
}