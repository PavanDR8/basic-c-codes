#include<stdio.h>
#include<stdlib.h>
void main(){
    char str[100];
    int l=0;

    printf("\n\nSeprate the individual characters from a string:\n");
    printf("-----------------------------------------------------\n");
    printf("Input the string:");
    fgets(str,sizeof str,stdin);
    printf("\n The character of the string are :\n");
    while(str[l]!='\0'){
        printf("%c",str[l]);
        l++;
    }
    printf("\n");
}
///write  a program in c to separate the individual character from a string