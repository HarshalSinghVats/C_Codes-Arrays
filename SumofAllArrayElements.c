#include<stdio.h>
int main()
{
    int n,arr[n],sum=0;
    printf("Enter number of elements in array : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter element %d\n",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
       sum=sum+arr[i]; 
    }
    printf("Sum of elements of array is : %d",sum);
    return 0;
}