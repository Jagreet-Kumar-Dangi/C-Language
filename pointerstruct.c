#include <stdio.h>
struct student
{
    int roll;
    char name[200];
    float marks;
};
int main(){
    struct student s={1,"jagreet",98};
    struct student *ptr =&s;
    printf("Roll no is: %d",ptr->roll);
    return 0;
}