#include<stdio.h>
void main()
{
    int A[10][10];
    int m,n,i,j;
    printf("Enter the number of rows and columns of the matrix");
    scanf("%d%d",&m,&n);
    printf("Enter %d elements",(m*n));
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("The matrix is");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("  %d",A[i][j]);
        }
        printf("\n");
    }
}