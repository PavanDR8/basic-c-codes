#include<stdio.h>
#include<stdlib.h>
int main(int argc,char*argv[]){
    if(argc==2){
        printf("The argument suppiled is %s\n",argv[1]);
    }
    else if(argc>3){
        printf("Too many arguments suppiled.\n");
    }
    else{
        if(argc==3){
            printf("The argument suppiled is %s \n",argv[0]);
            printf("The argument suppiled is %s \n",argv[1]);
            printf("The argument suppiled is %s \n",argv[2]);
        }
        int c=0;
        //c=atoi(argv[1])+atoi(argv[2]);
        c=argv[1]+argv[2];
        printf("\n\nAddition is =%d",c);
    }
}