#include<stdio.h>

int main()

{

    int n,m,i;

    scanf("%d",&n);

    int arr[n];

    int a[n],b[n],c=0,d=0;

    for(i=0;i<n;i++)

    scanf("%d",&arr[i]);

    scanf("%d",&m);

    for(i=0;i<m;i++)

    {

        a[c++]=arr[i];

        a[c++]=arr[i+m];

    }

    for(i=0;i<n;i++)

    printf("%d ",a[i]);

    

}