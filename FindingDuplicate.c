#include<stdio.h>
void input(int arr[],int n)
{  
    for(int i=0;i<n;i++)
    {
        printf("Enter element %d\n",i+1);
        scanf("%d",&arr[i]);
    }
    return;
}
void dupSearch(int arr[],int n)
{
    int count=0,x;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<+i;j++)
        {
            if(arr[j]==arr[i] && j!=i) 
            {
                x=arr[i];
                printf("%d is the duplicate.\n",x);
                count++;
                break;
                
            }
        }
    }
    if(count==0)  printf("No Duplicates.");
    return;
}
int main()
{
    int n;
    printf("Enter number of elements in array : ");
    scanf("%d",&n);
    int arr[n];
    input(arr,n);
    dupSearch(arr,n);
    return 0;
}
