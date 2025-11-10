#include<stdio.h>
int main(int argc,char *argv[]){
    if(argc==2){
        printf("The first argument suppiled is %s\n",argv[0]);
        printf("The second argument suppiled is %s\n",argv[1]);
    }
    else if(argc>2){
        printf("Too many arguments supplied.\n");
    }
    else{
        printf("One argument expected\n");
    }
    return 0;
}