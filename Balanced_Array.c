#include<stdio.h>
int balanced(int *arr,int n)
{
    int s=0;
    for(int i=0;i<n;i++)
    {
        s+=arr[i];
    }
    int add=0;
    for(int i=0;i<n;i++)
    {
        if(add==s-arr[i]-add)
        {
            return 1;
        }
        add+=arr[i];
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int m;
        scanf("%d",&m);
        int a[m];
        for(int i=0;i<m;i++)
        {
            scanf("%d",&a[i]);
        }
        int c=balanced(a,m);
        if(c==1)
        {
            printf("YES
");

        }

        else{
        printf("NO
");
        }
    }
}