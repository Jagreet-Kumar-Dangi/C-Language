#include <stdio.h>
int main(){
    int arr[4][4],r,c,tot=0;
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            scanf("%d",&arr[r][c]);
        }
    }
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            tot+=arr[r][c];
        }
        
    }
    printf("\n%d \n",tot);
    return 0;
}