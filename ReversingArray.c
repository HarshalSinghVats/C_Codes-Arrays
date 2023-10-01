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
    while(i<j)
    {
        int temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
        i++;
        j--;
    }
    return;
}
int main()
{
    int n;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    int arr[n];
    input(arr,n);
    printf("Array before reversing : ");
    for(int i=0;i<n;i++)    printf("%d ",arr[i]);
    printf("\n");
    reverse(arr,0,n-1);
    printf("Array after reversing : ");
    for(int i=0;i<n;i++)    printf("%d ",arr[i]);
    return 0;
}