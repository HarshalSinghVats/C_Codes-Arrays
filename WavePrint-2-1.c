// //print matrix in wave pattern...
// /*
// original:::
// 1 2 3
// 4 5 6
// 7 8 9
// to print:::
// 3 4 7
// 2 5 8
// 1 6 9
// */
#include<stdio.h>
int main(){
    int n,m;
    int temp=0;
    printf("Enter rows and columns of matrix : ");
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("Enter element : ");
            scanf("%d",&arr[i][j]);                   
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<m;j++){
            temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;                     
        }
    }
    int k,sub=0;
    printf("\n");
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<m;j++){
            if(j%2!=0)  k=sub;
            if(j%2==0){
                printf("%d ",arr[i][j]);
            }
            else{
                printf("%d ",arr[k][j]);
                k++;
            }
        }
        sub=k;
        printf("\n");
    }     
    return 0;
}