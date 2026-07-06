#include <stdio.h>
int main(){
    int n,m;
    printf("Enter rows and columns: \n");
    scanf("%d %d",&n,&m);
    int arr[n][m],arr1[n][m],arr2[n][m];
    printf("Enter the values: ");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arr2[i][j]=0;
            for(int t=0;t<n;t++){
                arr2[i][j]=arr2[i][j]+arr1[i][t]*arr1[t][j];

            }
        }
    }
    printf("Values of array 1: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d",arr[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    printf("Values of array 2: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d",arr1[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    printf("Value of Multiplication of both array:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d",arr2[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    return 0;
}