#include <stdio.h>
int main(){
    int arr[3][3],arr1[3][3],arr2[3][3],arrdiff[3][3];
    int r,c;
    printf("Enter the elements in Array \n");
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
    //sub element
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            arrdiff[r][c]=arr[r][c]-arr1[3][3]-arr2[3][3];
        }
    }
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            printf("%d",arrdiff[r][c]);
            printf("\t");
        }
        printf("\n ");
    }
    
    return 0;
}