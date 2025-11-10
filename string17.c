//write a program in c to compare two strings without  u sing
//string library function
#include<stdio.h>
#define str_size 100
int test(char*s1,char*s2){
     int flag=0;   
    while(*s1!='\0'||*s2!='\0'){
        if(*s1==*s2){
            s1++;
            s2++;
            
        }
        else if((*s1=='\0'&&*s2!='\0')
        ||(*s1!='\0'&&*s2=='\0')
        ||*s1!=*s2) {
           
            flag=1;
            break;
        }
    }
    return flag;
}
int main(void){
    char str1[str_size],str2[str_size];
    int flag=0; //flag is indicator to use for compare the string.
    printf("\nInput the 1st string:");
    fgets(str1,sizeof str1,stdin);

    printf("Input the 2nd string:");
    fgets(str2,sizeof str2,stdin);

    printf("\nString1:%s",str1);
    printf("\nString1:%s",str2);
    
    flag=test(str1,str2);
     
    if(flag==0){
        printf("\nstring are equal.\n");
    }
    else if(flag==1){
        printf("\nstring are not equal.");
    }
    return 0;
}