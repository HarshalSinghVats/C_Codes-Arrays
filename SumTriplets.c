#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of elements in array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter element %d\n",i+1);
        scanf("%d",&arr[i]);
    }
    int x;
    printf("Enter number to match pairs : ");
    scanf("%d",&x);
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=j;k<n;k++)
            {
                if(arr[i]+arr[j]+arr[k]==x)       
                {
                    if(i!=j && j!=k && k!=i)    printf("%d & %d & %d\n",arr[i],arr[j],arr[k]);
                }
            }
        }
    }
    return 0;
}