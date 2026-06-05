#include <stdio.h>
#include <string.h>
int main(){

    char s1[50];
    char s2[50];
    printf("Enter string1: ");
    fgets(s1,50,stdin);
    printf("Enter string2: ");
    fgets(s2,50,stdin);
    s1[strcspn(s1,"\n")]='\0';
    s2[strcspn(s2,"\n")]='\0';
    strncat(s1,s2,9);
    printf("%s",s1);
    long int len1,len2;
    len1=strlen(s1);
    len2=strlen(s2);
    // for(int i=0;i<=len2;i++){
    //     s1[len1+i]=s2[i];
        
    // }
    printf("String:",s1);
    return 0;
}