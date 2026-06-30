// Q86	Write a program to Count words in a sentence.


#include <stdio.h>

int main() {
    char str[200];
    int i = 0, words = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if ((i == 0 && str[i] != ' ' && str[i] != '\n') ||
            (str[i] != ' ' && str[i] != '\n' && str[i - 1] == ' '))
            words++;
        i++;
    }

    printf("Number of words = %d", words);

    return 0;
}