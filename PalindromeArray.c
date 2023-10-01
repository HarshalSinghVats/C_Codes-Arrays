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
    int brr[n];
    int i=0,j=n-1,count=0;
    while(j!=0)
    {
        brr[i]=arr[j];
        i++;
        j--;
    }
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]==brr[i])  count++;
    }
    if(count==n-1)  printf("The array is a palindrome.");
    else    printf("The array is not a palindrome.");
    return 0;
}