#include<stdio.h>

int main()

{

    int n,a[1000],i,ind,min,max;

    scanf("%d",&n);

    for(i=0;i<n;i++)

    {

        scanf("%d",&a[i]);

    }

    min=a[0];

    for(i=0;i<n;i++)

    {

        if(min>a[i])

        {

            min=a[i];

            ind=i;

            break;

        }

    }

    max=min;

    for(i=ind;i<n;i++)

    {

        if(max<a[i])

        {

            max=a[i];

        }

    }

    printf("%d",max-min);

}