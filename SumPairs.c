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
int main()
{
    int n;
    printf("Enter number of elements in array : ");
    scanf("%d",&n);
    int arr[n];
    input(arr,n);
    int x;
    printf("Enter number to match pairs : ");
    scanf("%d",&x);
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(arr[i]+arr[j]==x)       
            {
                if(i!=j)    printf("%d & %d\n",arr[i],arr[j]);
            }
        }
    }
    return 0;
}