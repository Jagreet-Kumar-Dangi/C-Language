#include <stdio.h>
int main(){
    int arr[3][3],arr1[3][3],arr2[3][3],arrsum[3][3];
    int r,c;
    printf("Enter the elements in Array-: \n");
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            scanf("%d",&arr[r][c]);
        }
    }
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            scanf("%d",&arr1[r][c]);
        }
    }
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            scanf("%d",&arr2[r][c]);
        }
    }
    //add element
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            arrsum[r][c]=arr[r][c]+arr1[3][3]+arr2[3][3];
        }
    }
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            printf("%d",arrsum[r][c]);
            printf("\t");
        }
        printf(" \n");
    }
    
    return 0;
}