//write a C program to sort a string array in ascending oder
#include <stdio.h>
#include <string.h>

#define str_size 100

int main() {
    char str[str_size];
    char ch;
    int i, j, l;

    printf("\n\nSort a string array in ascending order \n");
    printf("----------------------------------------------\n");

    printf("\nInput the string: ");
    fgets(str, sizeof(str), stdin);

    // fgets से '\n' हटाना
    str[strcspn(str, "\n")] = '\0';

    l = strlen(str);

    // Bubble sort logic
    for(i = 0; i < l - 1; i++) {
        for(j = 0; j < l - i - 1; j++) {
            if(str[j] > str[j+1]) {
                ch = str[j];
                str[j] = str[j+1];
                str[j+1] = ch;
            }
        }
    }

    printf("\nAfter sorting the string in ascending order:\n");
    printf("%s\n\n", str);

    return 0;
}