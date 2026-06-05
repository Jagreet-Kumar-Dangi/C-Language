#include <stdio.h>
struct student
{
    int roll;
    char name[200];
    float marks;
};
int main(){
    struct student s={1,"Jagreet kumar Dangi ",98};
    struct student *ptr =&s;
    printf("Roll no =%d\n",ptr->roll);
    return 0;
}