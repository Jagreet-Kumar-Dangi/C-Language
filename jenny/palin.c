#include <stdio.h>
int main(){
    char str[100];
    printf("\nEnter String-:");
    fgets(str,100,stdin);
    int flag=1;
    int l=0;
    for(int i=0;str[i]!='\0';i++){
        l++;
    }
    for(int i=0,j=l-1;i<j;i++,j--){
        
    }
    return 0;
}