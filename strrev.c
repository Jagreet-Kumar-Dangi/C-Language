#include <stdio.h>
#include <string.h>
int main(){
    printf("Enter String: ");
    char str[100];
    fgets(str,100,stdin);
    int l=strlen(str);
    for(int i=0;i<=(l/2)-1;i++){
        char temp=str[i];
        str[i]=str[l-2-i];
        str[l-2-i]=temp;
    }
    printf("%s",str);
    printf("%s",str);
    return 0;
}