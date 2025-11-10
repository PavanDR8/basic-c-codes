//write a program in c to print individual characters of sentence
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){
    char str[100];
    int l,i;

    printf("\n\nPrint indiviusal characters of sentence in reverse order:\n");
    printf("------------------------------------------------------------------\n");
    printf("\n\nInput the string:");
    fgets(str,sizeof str,stdin);
    l=strlen(str);
    printf("The chharacters of the string in reverse are :\n");
//reverse order to check ...
    for (i=l-1;i>=0;i--){
        printf("%c",str[i]);
    }
    printf("\n");
}