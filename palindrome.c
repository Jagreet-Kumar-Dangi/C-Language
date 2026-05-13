#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    char str1[100],org[100];
    printf("Enter String: ");
    fgets(str1,100,stdin);
    strcpy(org,str1);
    strrev(str1);
    if(strcmp(org,str1)==0){
        printf("\nPalindrome");
    }else{
        printf("Not Palindrome");
    }
    return 0;
}