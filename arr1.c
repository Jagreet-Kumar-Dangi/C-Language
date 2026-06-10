#include <stdio.h>
int main(){
    int arr[3][3];
    int r,c;
    printf("Enter element in array!\n");
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            scanf("%d",&arr[r][c]);
        }
    }
    printf("\n Saved elements in array array!\n");
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            printf("%d",arr[r][c]);
            printf("\t");
        }
        printf("\n");
    }
    return 0;
}