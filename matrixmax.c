#include <stdio.h>
int main(){
    int r,c;
    printf("Enter row and collumn number: ");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    printf("Enter the elements in Array \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int max=arr[0][0];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]>max)
                max=arr[i][j];

        }
    }
    printf("Array values is: \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d",arr[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    printf("Max value in array is:%d\n",max);
    return 0;
}