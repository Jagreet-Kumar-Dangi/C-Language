#include <stdio.h>
int main(){
    int arr[3][3],arr1[3][3],arm[3][3];
    int r,c;
    printf("Enter the elements in Array\n");
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
    int t;
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            arm[r][c]=0;
            for(t=0;t<3;t++){
                arm[r][c]=arm[r][c]+arr[r][t]*arr1[t][c];
            }
        }
    }
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            printf("%d",arm[r][c]);
            printf("\t");
        }
        printf("\n");
    }

    
    return 0;
}