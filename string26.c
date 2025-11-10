//write a program in C to read a sentence and replace lowercase characters by
//uppercase and vice-versa.
#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main(){
    char str[100];
    int ctr,ch,i;

    printf("\n\nReplace  lowercase chracters by up percase and vise-versa:\n");
    printf("-----------------------------------------------------\n");
    printf("\n\n Input the string:");
    fgets(str,sizeof str,stdin);

    i=strlen(str);
    ctr=i;

    printf("\nThe given sentence is :%s",str);
    printf("\n\nAfter Case changed the string is :");
    for(i=0;i<=ctr;i++)
    {
        ch=islower(str[i])?toupper(str[i]):tolower(str[i]);
        putchar(ch);
    }
    printf("\n\n");
}