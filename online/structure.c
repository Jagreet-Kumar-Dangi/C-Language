#include <stdio.h>
#include <string.h>
struct student
{
    char name[50];
    int reg;
    int rno;
    char branch[20];
    char section[7];
}s1;
int main()
{
    strcpy(s1.name,"Jagreet kumar");
    s1.reg=12509577;
    s1.rno=26;
    strcpy(s1.branch,"CSE");
    printf("\nName= %s\n",s1.name);
    printf("\nRegistration no.= %d\n",s1.reg);
    printf("\nRoll No.= %d\n",s1.rno);
    printf("\nBranch= %s\n",s1.branch);

}
