#include<stdio.h>
#include<string.h>
int main(){
    char *str="Tom Manager 28";
    char name[10],designation[10];
    int age,ret;

    ret=sscanf(str,"%s%s%d",name,designation,&age);

    printf("Return value:%d\n",ret);
    printf("Name:%s\n",name);
    printf("designation:%s\n",designation);
    printf("Age:%d\n",age);

    return 0;
}