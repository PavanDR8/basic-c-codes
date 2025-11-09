#include<stdio.h>
#include<string.h>

int main() {
    int sal;
    char name[30], designation[30], info[60];

    printf("\nEnter your name:");
    gets(name);

    printf("\nEnter your designation:");
    gets(designation);

    printf("\nEnter your salary:");
    scanf("%d", &sal);

    sprintf(info, "Welcome %s!\nName:%s\nDesignation:%s\n:%s\nSalary:%d", 
            name, name, designation, sal);

    printf("\n using sprintf");
    printf("\n%s", info);
    printf("\n using printf");
    printf("\n welcome %s!\n Name:%s\n Designation:%s\n Salary:%d", 
            name, name, designation, sal);
    return 0;
}
//signal to operating system program run fine  