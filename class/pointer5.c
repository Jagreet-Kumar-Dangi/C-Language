#include <stdio.h>
int main(){
    int n,e,x;
    printf("Enter the size of an array-:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the value of an array-:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter element to replace-:");
    scanf("%d",&e);
    printf("Enter location to replace-:");
    scanf("%d",&x);
    if(x>=n ||x<0){
        printf("Not possible.");
    }else{
        arr[x]=e;
    }
    printf("Array after replacement:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}