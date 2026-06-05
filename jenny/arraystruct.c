#include <stdio.h>
struct student
{
    int roll;
    char name[200];
    float marks;
};
int main(){
    struct student s[3];
    for (int i=0;i<5;i++){
        printf("Enter Info of Students hi =%d\n",i+1);
        printf("Enter Roll no=");
        scanf("%d",&s[i].roll);
        getchar();
        printf("Enter Name= ");
        fgets(s[i].name,200,stdin);
        printf("Enter Marks: ");
        scanf("%f",&s[i].marks);
    }
    for (int i=0;i<3;i++){
        printf("Info of Student %d\n",i+1);
        printf("\nRoll no. %d\n",s[i].roll);
        printf("\nname of student:%s",s[i].name);
        printf("\nMarks of student: %f",s[i].marks);
    }
    return 0;
}