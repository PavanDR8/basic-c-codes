#include<stdio.h>
int main(int argc ,char *argv[]){
     printf("\n\n Program name %s\n",argv[0]);

     if(argc==2){
        printf("\n\nThe argument suppiled is %s\n",argv[1]);
     }
     else if(argc>2){
        printf("\n\nToo many arguments suppiled.\n");
     }
     else{
        printf("one argument expected.\n");
     }
}