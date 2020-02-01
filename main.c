#include <stdio.h>
#define MAX 20
/*
// This does not work because of
// the uncertainty of the size of the input array.
// I wonder is there a way to solve this?

void display_matrix (int(*a)[], int m, int n){
    int i, j;
    for(i=0; i<m; ++i)
        for(j=0; j<n; ++j)
        {
            printf("%d ", (*(a+i))[j]);
            if (j == n-1) printf("\n");
        }
}
*/
int main()
{
    int a[MAX][MAX], m, n, i, j;
    printf("Dimension of the matrix: ");
    scanf("%d %d", &m, &n);
    if (m > MAX || n > MAX){
            printf("Matrix too large");
            return -1;
    }

    printf("\nStart input:\n");
    for(i=0; i<m; ++i)
        for(j=0; j<n; ++j)
        {
            printf("Input row %d column %d: ",i+1, j+1);
            scanf("%d", &a[i][j]);
        }

    printf("\nThe input matrix is:\n");
    for(i=0; i<m; ++i)
        for(j=0; j<n; ++j)
        {
            printf("%d ", a[i][j]);
            if (j == n-1) printf("\n");
        }

    int transpose[n][m];
    for(i=0; i<m; ++i)
        for(j=0; j<n; ++j)
        {
            transpose[j][i] = a[i][j];
        }

    printf("\nThe transposed matrix is:\n");
    for(i=0; i<n; ++i)
        for(j=0; j<m; ++j)
        {
            printf("%d ", transpose[i][j]);
            if (j == m-1) printf("\n");
        }
    return 0;
}
