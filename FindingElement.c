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
void search(int arr[],int n, int x)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)   
        {
            printf("%d is in the array at index %d.\n",x,i);
            //break;
            count++;
        }    
    }
    if(count==0)    printf("%d is not in the array.",x);
    return;
}
int main()
{
    int n;
    printf("Enter number of elements in array : ");
    scanf("%d",&n);
    int arr[n];
    input(arr,n);
    int x;
    printf("Enter element to search : ");
    scanf("%d",&x);
    search(arr,n,x);
    return 0;
}