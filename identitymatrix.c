#include <stdio.h>
int main(){
    int r,c;
    printf("Enter row and collumn number -: ");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    printf("Enter the elements in Array -:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int flag=0;
    int flag2=0;
    printf("Array values is: \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d",arr[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i==j){
                if(arr[i][j]==1)
                    flag++;
            }else{
                if(arr[i][j]==0){
                    flag2++;
                }
            }
        }
    }
    if(flag==r && flag2==(r*c)-r)
        printf("It is Identity matrix.");
    else
        printf("It is not an Identity matrix.");
    return 0;
}