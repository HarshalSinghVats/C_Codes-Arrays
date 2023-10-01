// to add matrices the only condition is that they be of the same dimensions.
#include<stdio.h>
int main(){
    int r,c;
    printf("Enter rows and columns of both matrices : ");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    printf("MATRIX - 1 \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("Enter element\n",i+1);
            scanf("%d",&arr[i][j]);
        }
    }
    int brr[r][c];
    printf("MATRIX - 2 \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("Enter element \n");
            scanf("%d",&brr[i][j]);
        }
    }
    //printing matrix - 1
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    } 
    printf("\n");
    //printing matrix - 2
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            printf("%d ",brr[i][j]);
        printf("\n");
    }    
    //sum
    printf("\nSUM : \n");
    //printing the sum
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            printf("%d ",arr[i][j]+brr[i][j]);
        printf("\n");
    }
    return 0;
}