#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter rows and columns of matrix : ");
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("Enter element : ");
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nBefore transpose : \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
    // for transpose...
    printf("\nAfter transpose : \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            printf("%d ",arr[j][i]);
        printf("\n");
    }
    return 0;
}   