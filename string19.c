//write a program in c to copy one setences to another string.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main(){
    char str1[100],str2[100];
    int i;
    printf("\n\ncopy one string into another string:");
    printf("-----------------------------------------\n");


    printf("\nInput the string:");
    fgets(str1,sizeof str1,stdin);

    /*Copies string to string2 character by character*/
    i=0;
    while(str1[i]!='\0'){
        str2[i]=str1[i];
        i++;
    }
    str2[i]='\0';
    printf("\nThe First String is:%s\n",str1);
    printf("\nThe Second string is:%s\n",str2);
    printf("\nNumber of characters Copied:%d\n\n",i);
}