//to solve this question we will run all the elements of the array with an integral array to check the missing element.
#include<stdio.h>
void search(int arr[],int n, int x)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)   count++;
    }
    if(count==1)    printf("%d is in the array.",x);
    else    printf("%d is not in the array.",x);
    return;
}
int main()
{
    int x;
    printf("Enter number to check : ");
    scanf("%d",&x);
    int arr[100];
    for(int i=1;i<=100;i++)     arr[i-1]=i;
    search(arr,99,x);
    return 0;
}


/*
this is a method that will work fast for short data but to run it on large scale just subtract the arrays when they are
complete and incomplete... the difference is the missing number.
*/