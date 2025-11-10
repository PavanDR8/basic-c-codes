#include<stdio.h>
#include<stdlib.h>
void main(){
    char str[100];
    int l=0;

    printf("\n\n\t\t-----find the length of a string or sentence------\n\n");
    printf("---------------------------------\n");
    printf("input the string:");
    fgets(str,sizeof str,stdin);
    while(str[l]!='\0'){
        l++;
    }
    printf("Length of the string is :%d\n\n",l-1);
}