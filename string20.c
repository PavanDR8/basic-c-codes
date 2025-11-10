#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define str_size 100
void main(){
    char str[str_size];
    int i,len,vowel,cons;
    printf("\n\nCount total number of vowel or consonant:\n");
    printf("-----------------------------------------------\n");

    printf("\n\nInput the string:");
    fgets(str,sizeof str,stdin);

    vowel=0;
    cons=0;
    len=strlen(str);

    for(i=0;i<len;i++){
        
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            vowel++;
        }
        else if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')){
            cons++;
        }
    }
    printf("\nThe total number of vowwel in the string is:%d\n",vowel);
    printf("The total number of consonant in the string is:%d\n\n",cons);
}