#include <stdio.h>
int  main(){
    void *p;
    int a=10;
    float b=5.5;
    char c='X';
    p=&a;
    printf("\nAddress of var a=%d",p);
    printf("\nValue of var a=%d",*(int *)p);
    p=&b;
    printf("\nAddress of var a=%d",p);
    printf("\nValue of var a=%.1f",*(float *)p);
    p=&c;
    printf("\nAddress of var a=%d ",p);
    printf("\nValue of var a=%c",*(char *)p);
    int *q=NULL;
    


}