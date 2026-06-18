#include <stdio.h>
int main(){
    int arr[3][3];
    int r,c;
    printf("Enter the elements in Array: \n");
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            scanf("%d",&arr[r][c]);
        }
    }
    int low=0,up=0;
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            if(r>c)
                low +=arr[r][c];
            if(c>r)
                up +=arr[r][c];
        }
    }
    printf("Lower tri value:%d\n",low);
    printf("upp tri value:%d\n",up);

    return 0;
}