#include <stdio.h>
int main(){
    int row,coll;
    scanf("%d %d",&row,&coll);
    int arr[row][coll];
    int r,c;
    printf("Enter element in array\n");
    for(r=0;r<row;r++){
        for(c=0;c<coll;c++){
            scanf("%d",&arr[r][c]);
        }
    }
    printf("\n Saved elements in array arr\n");
    for(r=0;r<row;r++){
        for(c=0;c<coll;c++){
            printf("%d",arr[r][c]);
            printf("\t");
        }
        printf("\n");
    }
}