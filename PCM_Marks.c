#include<stdio.h>
int main(){
    int n;
    printf("Enter number of students : ");
    scanf("%d",&n);
    int arr[n][4];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(j==1)
            {
                printf("Enter marks of physics of student %d\n",i+1);
                scanf("%d",&arr[i][j]);
            }
            else if(j==2)
            {
                printf("Enter marks of chemistry of student %d\n",i+1);
                scanf("%d",&arr[i][j]);
            }
            else if(j==3)
            {
                printf("Enter marks of mathematics of student %d\n",i+1);
                scanf("%d",&arr[i][j]);    
            }
            else
            {
                printf("Enter roll number of student %d\n",i+1);
                scanf("%d",&arr[i][j]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<4;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
    return 0;
}