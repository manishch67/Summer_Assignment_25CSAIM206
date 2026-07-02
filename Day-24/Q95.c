// Q95	Write a program to Find longest word.


#include <stdio.h>
#include <string.h>

int main() {
    char str[200], longest[100];
    int i = 0, j = 0, max = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        char word[100];
        j = 0;

        while (str[i] == ' ')
            i++;

        while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            word[j++] = str[i++];
        }
        word[j] = '\0';

        if (j > max) {
            max = j;
            strcpy(longest, word);
        }
    }

    printf("Longest word: %s", longest);

    return 0;
}