//find sum of given matrix on n x m on user input points
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
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }

    int sum=0;
    int s_i,s_j;
    printf("Enter both starting co-ordinates : ");
    scanf("%d %d",&s_i,&s_j);
    int e_i,e_j;
    printf("Enter both ending co-ordinates : ");
    scanf("%d %d",&e_i,&e_j);
    for(int i=s_i;i<=e_i;i++)
    {
        for(int j=s_j;j<=e_j;j++)
            sum=sum+arr[i][j];
    }
    printf("Sum of matrix : %d",sum);
    return 0;
}
