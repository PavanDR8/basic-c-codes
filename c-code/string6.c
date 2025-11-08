/*#include<stdio.h>
int main(){
        int i;
        char sports[5][15]={
            "golf",
            "hockey",
            "football",
            "cricket",
            "shooting"
        };
        for(i=0;i<5;i++){
            printf("String =%10s",sports[i]);
            printf("\t Address of string literal = %d\n",sports[i]);
 
        }
}*/
#include<stdio.h>
int main(){
        int i;
        char *sports[5]={
            "golf",
            "hockey",
            "football",
            "cricket",
            "shooting"
        };
        for(i=0;i<5;i++){
            printf("String =%10s",sports[i]);
            printf("\t Address of string literal = %u\n",sports[i]);
 
        }
}

