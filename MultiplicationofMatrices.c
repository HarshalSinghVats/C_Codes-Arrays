//wap to multiply matrices...
#include<stdio.h>
int main()
{
    //making the matrices...
    int n,m;
    printf("Enter rows and columns of first matrix : ");
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){
            printf("Enter element : ");
            scanf("%d",&arr[i][j]);
        }
    }
    int p,q;
    printf("Enter rows and columns of second matrix : ");
    scanf("%d %d",&p,&q);
    int brr[p][q];
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++){
            printf("Enter element : ");
            scanf("%d",&brr[i][j]);
        }
    }
    //checking the matrices if they are elligible for  multiplication...
    if(m!=p){
        printf("\nThe matrices can't be multiplied.\n");
        return 0;
    }
    int res[n][q];
    //initialising the resultant matrix...
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<q;j++)
            res[i][j]=0;
    }
    //printing the matrices...
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
            printf("%d ",brr[i][j]);
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<n;i++){
        int k=0;
        for(int j=0;j<q;j++){
            int l=0;
            while(l<m){
                res[i][k]+=(arr[i][l]*brr[l][j]);
                l++;
            }
            k++; 
        }
    }
    printf("Multiplied result : \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<q;j++)
            printf("%d ",res[i][j]);
        printf("\n");
    }
    return 0;
}