#include <stdio.h>
int main(){
    int n1;
    printf("Enter the size of an array-:");
    scanf("%d",&n1);
    int arr1[n1],arr2[n1],arr3[n1];
    printf("Enter the value of an array 1: ");
    for(int i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter the value of an array 2: ");
    for(int i=0;i<n1;i++){
        scanf("%d",&arr2[i]);
    }
    printf("\nArray before swaping: \n");
    printf("\nArray 1 \n");
    for(int i=0;i<n1;i++){
        printf("%d ",arr1[i]);
    }
    printf("\nArray 2\n");
    for(int i=0;i<n1;i++){
        printf("%d ",arr2[i]);
    }
    for(int i=0;i<n1;i++){
        arr3[i]=arr1[i];
    }
    for(int i=0;i<n1;i++){
        arr1[i]=arr2[i];
    }
    for(int i=0;i<n1;i++){
        arr2[i]=arr3[i];
    }
    printf("\nArray after swaping -:\n");
    printf("\nArray 1 \n");
    for(int i=0;i<n1;i++){
        printf("%d ",arr1[i]);
    }
    printf("\nArray 2\n");
    for(int i=0;i<n1;i++){
        printf("%d ",arr2[i]);
    }
    return 0;
}