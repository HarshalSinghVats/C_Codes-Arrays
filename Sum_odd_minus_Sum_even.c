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
    int sum_odd=0,sum_even=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0) sum_even+=arr[i];
        else    sum_odd+=arr[i];
    }
    printf("%d is the sum of odd indices and %d is the sum of even indices.",sum_odd,sum_even);
    printf("\nDifference = %d",sum_even-sum_odd);
    return 0;
}