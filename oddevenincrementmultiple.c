#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter element %d\n",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Array before updation : ");
    for(int j=0;j<n;j++)    
        printf("%d ",arr[j]); 
    for(int k=0;k<n;k++)
    {
        if(k%2==0)      arr[k]=arr[k]+10;
        else    arr[k]=arr[k]*2;
    }
    printf("\nArray after updation : ");
    for(int l=0;l<n;l++)  
        printf("%d ",arr[l]);
    return 0;    
}