#include<stdio.h>
int main()
{
    int n,arr[n];
    printf("Enter number of elements in array : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter element %d\n",i+1);
        scanf("%d",&arr[i]);
    }
    int greatest=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>greatest)     greatest=arr[i];
    }
    printf("%d is the maximum value in the array.",greatest);
    return 0;
}