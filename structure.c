#include <stdio.h>
struct Student
{
    int rollno;
    char name[200];
    float marks;
};
int main(){
    struct Student s1;
    struct Student s2;
    printf("Enter Info for s1: ");
    scanf("%d",&s1.rollno);
    getchar();
    fgets(s1.name,200,stdin);
    
    scanf("%f",&s1.marks);
    printf("Enter info of s2 ");
    scanf("%d",&s2.rollno);
    getchar();
    fgets(s2.name,200,stdin);
   
    scanf("%f",&s2.marks);
    printf("%d\n",s1.rollno);
    printf("%s\n",s1.name);
    printf("%.2f\n",s1.marks);
    printf("%d\n",s2.rollno);
    printf("%s\n",s2.name);
    printf("%.2f\n",s2.marks);
    
    return 0;
}