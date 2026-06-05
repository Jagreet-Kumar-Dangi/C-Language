#include <stdio.h>
#include <string.h>
int main(){
    char str1[50],str2[50];
    printf("Enter string1 : ");
    fgets(str1,50,stdin);
    printf("Enter string2: ");
    fgets(str2,50,stdin);
    int cmp=0;
    for(int i=0;str1[i] != '\0';i++){
        for(int j=0;str2[j]!='\0';j++){
            if(str1[i]==str2[j])
                cmp++;
        }
    }
    if(strlen(str1)==cmp)
        printf("Anagram.\n");
    else
        printf("Not Anagram.\n");
    return 0;
}