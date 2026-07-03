// Q99	Write a program to Sort names alphabetically.


#include <stdio.h>
#include <string.h>

int main() {
    char names[100][100], temp[100];
    int n, i, j;

    printf("Enter the number of names: ");
    scanf("%d", &n);
    getchar();

    printf("Enter the names:\n");
    for (i = 0; i < n; i++)
        fgets(names[i], sizeof(names[i]), stdin);

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("Names in alphabetical order:\n");
    for (i = 0; i < n; i++)
        printf("%s", names[i]);

    return 0;
}