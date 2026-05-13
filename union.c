#include <stdio.h>
union demo
{
    int a;
    char b;
    float c;
};
int main(){
    union demo u;
    printf("%ld",sizeof(u));
    return 0;
}
