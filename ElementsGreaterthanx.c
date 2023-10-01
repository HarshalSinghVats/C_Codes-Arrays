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
    int x,count=0;
    printf("Enter number to check : ");
    scanf("%d",&x);
    for(int i=0;i<n;i++)
    {
        if(arr[i]>x)    count++;
    }
    printf("%d elements are greater than %d.",count,x);
    return 0;
}