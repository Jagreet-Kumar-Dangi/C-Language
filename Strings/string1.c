#include <stdio.h>
#include <string.h>
int check(char s[],int n){
    int i,j;
    int l=strlen(s);
    
    for(int i=0,j=l-2;i<j;i++,j--){
        if(s[i] !=s[j])
            return 0;
    }
    return 1;
}
int main(){
    char str[100];
    fgets(str,100,stdin);
    int r=check(str,100);
    if(r)
        printf("Palindrome");
    else
        printf("Not Palindrome.");
    
}