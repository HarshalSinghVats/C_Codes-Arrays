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
    printf("Enter number of elements : ");
    scanf("%d",&n);
    int arr[n];
    input(arr,n);
    int arr_b[n];
    int k=n-1;
    int i=0;
    
    do{
        arr_b[i]=arr[k];
        i++;
        k--;
    }while(k>=0);

    for(int i=0;i<n;i++)    printf("%d ",arr[i]);
    printf("\n");
    for(int i=0;i<n;i++)    printf("%d ",arr_b[i]);
    return 0;
}