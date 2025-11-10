//write a C program to check whether a given substring is present
//in the given string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[80], search[20];
    int i, j, c1 = 0, c2 = 0, flag = 0;

    printf("\nCheck whether a given substring is present in the given string:\n");
    printf("---------------------------------------------------------------\n");

    printf("Input the string: ");
    fgets(str, sizeof str, stdin);
    str[strcspn(str, "\n")] = '\0'; // remove newline

    printf("Input the substring to search: ");
    fgets(search, sizeof search, stdin);
    search[strcspn(search, "\n")] = '\0'; // remove newline

    int len1 = strlen(str);
    int len2 = strlen(search);

    for(i = 0; i <= len1 - len2; i++) {
        for(j = 0; j < len2; j++) {
            if(str[i + j] != search[j])
                break;
        }
        if(j == len2) {
            flag = 1;
            break;
        }
    }

    if(flag == 1)
        printf("\nThe substring exists in the string.\n");
    else
        printf("\nThe substring does not exist in the string.\n");

    return 0;
}