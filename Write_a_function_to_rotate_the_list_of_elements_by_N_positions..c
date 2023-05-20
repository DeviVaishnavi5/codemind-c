#include<stdio.h>
int main()
{
    int n,i,j,m;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    for (j=0; j<m; j++)
    {
        int temp=arr[0];
        arr[0]=arr[n-1];
    for (i=1; i<n; i++)
        {
            int temp2=arr[i];
            arr[i]=temp;
            temp=temp2;
        }
    }
    for (i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}