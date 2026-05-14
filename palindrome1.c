#include <stdio.h>
#include <string.h>
int main(){
    char str[100],org[100];
    printf("Enter String: ");
    fgets(str,100,stdin);
    int j=0;
    for(int i=0;str[i]!='\0';i++){
        org[j]=str[i];
        j++;
    }
    org[j]='\0';
    char temp;
    int l=strlen(str);
     for(int i = 0; i < l / 2; i++) {
        char temp = str[i];
        str[i] = str[l - 1 - i];
        str[l - 1 - i] = temp;
    }
    if(strcmp(str,org)==0){
        printf("Palindrome.");
    }else{
        printf("Not Palindrome!");
    }
}