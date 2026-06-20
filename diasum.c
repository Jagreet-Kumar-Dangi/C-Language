#include <stdio.h>
int main(){
    int n,m;
    printf("Enter rows and columns -:\n");
    scanf("%d %d",&n,&m);
    int arr[n][m];
    printf("Enter the values: ");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0;
    printf("Values of array 1:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==j)
                sum +=arr[i][j];
            printf("%d",arr[i][j]);
            printf("\t");
        }
        printf("\n");}
    

    return 0;
}