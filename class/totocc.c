#include <stdio.h>
int count (int arr[],int s,int x);
int main(){
    printf("Enter the size of an array -:");
    int n;
    scanf("%d",&n);
    printf("Enter the values in array-: \n");
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x;
    printf("Enter the value to search-:\n");
    scanf("%d",&x);
    int res= count (arr,n,x);
    if(res)
        printf("Total occurence of %d is %d\n",n,res);
    else
        printf("Element %d not exist in array.",x);
    return 0;
}
int count (int arr[],int s,int x){
    int count=0;
    for(int i=0;i<s;i++){
        if(arr[i]==x)
            count++;
    }
    return count;
}