#include<stdio.h>
#include<limits.h>
void input(int arr[],int n)
{   
    for(int i=0;i<n;i++)
    {
        printf("Enter element %d\n",i+1);
        scanf("%d",&arr[i]);
    }
    return;
}
int great(int arr[],int n)
{
    int greatest=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>greatest) greatest=arr[i];
    }
    return  greatest;
}
int main()
{
    int n;
    printf("Enter number of elements in array : ");
    scanf("%d",&n);
    int arr[n];
    input(arr,n);
    int greatest=great(arr,n);
    int comp=INT_MAX,diff=0,val=0;
    for(int i=0;i<n;i++)
    {
        diff=greatest-arr[i];
        if(diff !=0 && diff<comp)   
        {
            comp=diff;
            val=arr[i];
        }
    }
    printf("%d is the second largest element in the array.",val);
    return 0;
}