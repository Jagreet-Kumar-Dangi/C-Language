#include <stdio.h>
int main(){
    int arr1[]={35,3,2,56,7,5};
    //malloc 
    int *arr2=(int *)malloc(sizeof(int) * 5);
    printf("Value at arr2 is %d\n",arr2[0]);
    printf("Value at arr2 is %d\n",arr2[1]);

    // free the memory
    free(arr2);  // MEMORY LEAKS OCCUR IF DYNAMIC MEMORY NOT FREE
    arr2=NULL;
    return 0;
}