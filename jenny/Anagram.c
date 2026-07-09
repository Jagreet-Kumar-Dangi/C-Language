#include <stdio.h>
#include <string.h>
void sort(char str[],int n){
    char temp;
    for(int i=0;str[i]!='\0';i++){
        for(int j=i+1;str[j]!='\0';j++){
            if(str[i]>str[j]){
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
}
int main(){
    char str1[100],str2[100];
    printf("\n String 1-:");
    fgets(str1,100,stdin);
    printf("\n String 2-:");
    fgets(str2,100,stdin);
    if(strlen(str1)!=strlen(str2)){
        printf("\n Not Anagram Strings.");
    }else{
        sort(str1,100);
        sort(str2,100);
        if(strcmp(str1,str2)==0){
            printf("\nAnagram.\n");
        }else{
            printf("\nNot Anagram.\n");
        }
    }
}