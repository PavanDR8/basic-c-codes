//write a program in C to extract a substring from a given string.
#include<stdio.h>
void main(){
    char str[100],sstr[100];
    int pos,l,c=0;

    printf("\n\nExtract a substring from a given string:\n");
    printf("-----------------------------------------\n");

    printf("Input the string:");
    fgets(str,sizeof str,stdin);

    printf("Input the length of substring:");
    scanf("%d%d",&l,&pos);

    while(c<l){
        sstr[c]=str[pos+c-1];
        c++;
    }
    sstr[c]='\0';
    printf("\n\nThe substring retrieve from the string is:%s\n",sstr);
}