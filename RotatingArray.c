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
void reverse(int arr[],int i,int j)
{
    int temp;
    while(i<j)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    return;
}
int main()
{
    int n;
    printf("Enter number of elements in the array : ");
    scanf("%d",&n);
    int arr[n];
    input(arr,n);
    int k;
    printf("Enter number of steps for rotation : ");
    scanf("%d",&k);
    if(k>n) k=k%n;
    printf("Array before roatation : ");
    for(int i=0;i<n;i++)    printf("%d ",arr[i]);
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    printf("\nArray after roatation : ");
    for(int i=0;i<n;i++)    printf("%d ",arr[i]);
    return 0;
}