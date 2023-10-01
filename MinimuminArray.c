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
    int smallest=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<smallest)     smallest=arr[i];
    }
    printf("%d is the minimum value in the array.",smallest);
    return 0;
}