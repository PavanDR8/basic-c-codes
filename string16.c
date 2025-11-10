#include<stdio.h>
#include<string.h>
#define str_size 100

int main(){
    char str[str_size];
    int i, wrd;
    int inWord = 0; // 0 = outside word, 1 = inside word

    printf("\n\nCount the total number of words in a string:\n");
    printf("----------------------------------------------------\n");
    printf("\nInput the string: ");
    fgets(str, sizeof str, stdin);

    wrd = 0;

    for(i=0; str[i]!='\0'; i++){
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t'){
            inWord = 0;
        }
        else {
            if(inWord==0){
                wrd++;
                inWord = 1;
            }
        }
    }

    printf("Total number of words in the string is: %d\n", wrd);
    return 0;
}