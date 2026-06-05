#include <stdio.h>
int main(){
    int arr[2][4]={{1,2,3,4},
                    {5,6,7,8}};
    printf("Element of an array A are\n");
    int r,c;
    for(r=0;r<2;r++){
        for(c=0;c<4;c++){
            printf("%d\n",arr[r][c]);
        }
    }

    return 0;
}