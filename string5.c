// 
#include<stdio.h>
#include<string.h>
int  main(){
    int i=1,*ip=&i;

    char *sports[]={
        "golf",
        "hockey",
        "football",
        "cricket",
        "shooting"
    };
    for(i=0;i<5;i++){
        printf("String=%10s",sports[i]);
        printf("\tAddress of string literal=%u\n",sports[i]);
    }
    //signal to operating system program run fine 
    return 0;
}
/*ouput : String=      golf       Address of string literal=4210788
String=    hockey       Address of string literal=4210793
String=  football       Address of string literal=4210800
String=   cricket       Address of string literal=4210809
String=  shooting       Address of string literal=4210817*/
//apko kya lagta hai literal no kya hai?😊