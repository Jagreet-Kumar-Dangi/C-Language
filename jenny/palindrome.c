#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    char str1[1000],org[1000];
    printf("Enter Character-: ");
    fgets(str1,100,stdin);
    strcpy(org,str1);
    strrev(str1);
    if(strcmp(org,str1)==0){
        printf("\nPalindrome.\n");
    }else{
        printf("\nNot Palindrome.\n");
    }
    return 0;
}