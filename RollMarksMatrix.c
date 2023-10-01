#include<stdio.h>
int main(){
    int arr[4][2];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<2;j++)
        {
            if(j==1)
            {
                printf("Enter marks of student %d\n",i+1);
                scanf("%d",&arr[i][j]);
            }
            else
            {
                printf("Enter roll no. of student %d\n",i+1);
                scanf("%d",&arr[i][j]);
            }
        }
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<2;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
    return 0;
}