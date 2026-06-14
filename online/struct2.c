#include <stdio.h>
struct Student
{
    char name[50];
    int reg;
    int marks[5]
};
int main(){
    struct Student S[3];
    printf("\n Enter Details one by one");
    int i,j;
    for(i=0;i<3;i++)
    {
        fflush(stdin);
        printf("\nEnter Name: ");
        gets(S[i].name);
        fflush(stdin);
        printf("\nEnter Registration Number: ");
        scanf("%d",&S[i].reg);
        printf("\nEnter Marks of Student on eby one for 5 Subjects\n");
        for(j=0;j<5;j++){
            scanf("%d",&S[i].marks[j]);
        }
    }
    printf("\nDetails of Student Ssaved as Record ");
    for(int i=0;i<3;i++){
        printf("\nName= %s",S[i].name);
        printf("\nRegistration= %d",S[i].reg);
        printf("\nmarsk= %ls\n",S[i].marks);
    }
} 