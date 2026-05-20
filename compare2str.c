#include <stdio.h>
#include <string.h>
int main(){
    char str1[100],str2[100];
    printf("Enter String 1: ");
    fgets(str1,100,stdin);
    printf("Enter String 2: ");
    fgets(str2,100,stdin);
    // int comp=strcmp(str1,str2);
    // printf("%d",comp);
    int flag=0;
    for(int i=0;str1[i]!='\0' ||str2[i]!='\0';i++){
        if(str1[i]!=str2[i]){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("String are not equal\n");
    }
    else{
        printf("Strings are equal\n");
    }
    return 0;
}