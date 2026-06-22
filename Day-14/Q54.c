// Q54	Write a program to Frequency of an element.

#include <stdio.h>

int main() {
    int arr[100], n, element, count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to find frequency: ");
    scanf("%d", &element);

    for(int i = 0; i < n; i++) {
        if(arr[i] == element) {
            count++;
        }
    }

    printf("Frequency of %d = %d\n", element, count);

    return 0;
}