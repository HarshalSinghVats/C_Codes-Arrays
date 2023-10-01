#include<stdio.h>
int main()
{
    //int arr[2][2]; //each curly bracket signifies a row.//the total element size is the prodcut of rows and columns

    //arrays can be initialized in both ways
    //step 1: int arr[2][2]={{1,2},{3,4}};
    //step 2:
    // arr[0][0]=1;
    // arr[0][1]=1;
    // arr[1][0]=1;
    // arr[1][1]=1;

    //user input:
    int r,c;
    printf("Enter number of rows and columns : ");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            scanf("%d",&arr[i][j]);
    }

    //printing the array
    printf("\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
    return 0;
}