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
    printf("Array values is:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d",arr[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    int max_row=0;
    int max_col=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]>max_row)
                max_row=arr[i][j];
            if(arr[j][i]>max_col)
                max_col=arr[j][i];
            }
            printf("Maximum in row %d = %d\n",(i+1),max_row);
            printf("Maximum in collumn %d is %d\n",(i+1),max_col);
    }

    return 0;
}