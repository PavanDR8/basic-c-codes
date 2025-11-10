//write a program in C to read a string through keyboard
//and sort it using bubble sort.
#include<stdio.h>
#include<string.h>
void main(){
    char name[25][50],temp[25];
    int n,i,j;

    printf("\n\nSorts the strings of an array using bubble sort:\n");
    printf("----------------------------------------\n");
    printf("Input number of strings:");
    scanf("%d",&n);

    printf("Input string %d:\n",n);
    for(i=0;i<=n;i++){
        fgets(name[i],sizeof name,stdin);
    }
    //logic bubble sort
    for(i=0;i<=n;i++)
        for(j=0;j<=n;j++)
            if(strcmp(name[i],name[j+1])>0)
            {
                strcpy(temp,name[j]);
                strcpy(name[j],name[j+1]);
                strcpy(name[j+1],temp);
            }
            printf("The string appears after sorting:\n");
            for(i=0;i<=n;i++)
                printf("%s\n",name[i]);
}