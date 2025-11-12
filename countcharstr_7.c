//Program to read multiple lines of text and then count the number of characters, words, and lines in the text
#include <stdio.h>

int main() {
    char text[1000];
    int i, characters = 0, words = 0, lines = 0;

    printf("Enter multiple lines of text (end with $):\n");

    i = 0;
    char ch;
    while ((ch = getchar()) != '$') {
        text[i++] = ch;
    }
    text[i] = '\0';

    for (i = 0; text[i] != '\0'; i++) {
        characters++;

        if (text[i] == ' ' || text[i] == '\n')
            words++;

        if (text[i] == '\n')
            lines++;
    }

    words++;
    lines++; 

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}