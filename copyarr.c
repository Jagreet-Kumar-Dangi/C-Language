#include <stdio.h>
int main(){
    int n,m,r;
    printf("Enter size of arr1 ");
    scanf("%d",&n);
    printf("Enter size of arr2");
    scanf("%d",&m);
    r=n+m;
    int arr1[n],arr2[m],arr3[r];
    printf("Enter element of arr1");
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter element of arr2");
    for(int i=0;i<m;i++){
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<n;i++){
        arr3[i]=arr1[i];
        
    }
    for(int i=0,j=n;i<m;i++){
        arr3[j]=arr2[i];
        j++;
    }
    printf("Element of arr3");
    printf("Enter element of arr1 ");
    for(int i=0;i<r;i++){
        printf("%d\n",arr3[i]);
    }

    return 0;
}