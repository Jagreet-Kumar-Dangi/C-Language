#include <stdio.h>
void display(int A[],int size);
int main(){
    int n;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    int arr[n];
    display(arr,n);
    return 0;
}
void display(int A[],int size){
    int i;
    printf("Elements in an array A are\n");
    for(i=0;i<size;i++){
        scanf("%d",&A[i]);
    }
    int sum=0;
    for(i=0;i<size;i++){
        printf("%d\n",A[i]);
        sum+=A[i];
    }
    printf("Total of array is %d\n",sum);
}