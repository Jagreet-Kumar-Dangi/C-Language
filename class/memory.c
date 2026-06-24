#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 10;
    float *cgpa;

    cgpa = (float *)malloc(n * sizeof(float));


    if (cgpa == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

   
    printf("Enter CGPA of %d students: \n", n);
    for (int i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%f", &cgpa[i]);
    }

    printf("\nCGPA of students -:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d CGPA = %.2f\n", i + 1, cgpa[i]);
    }

    free(cgpa);

    return 0;
}