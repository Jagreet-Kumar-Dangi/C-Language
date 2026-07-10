#include <stdio.h>
void sort(int arr[],int s);
int main(){
    printf("Enter the size of an array -:");
    int n;
    scanf("%d",&n);
    printf("Enter the values in array-:\n");
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
    
    return 0;
}
void sort(int arr[],int s){
    for(int i=0;i<s;i++){
        for(int j=0;j<s-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<s;i++){
        printf("%d ",arr[i]);
    }
    
}