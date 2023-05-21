#include<stdio.h>

int main()

{

    int arr[100],n,i,j,c=0,k=0;

    scanf("%d",&n);

    for(i=0;i<n;i++)

    {

        scanf("%d",&arr[i]);

    }

    for(i=0;i<n;i++)

    {

        c=0;

        for(j=0;j<n;j++)

        {

            if(i!=j)

            {

                if(arr[i]==arr[j])

                {

                    c++;

                    break;

                }

            }

        }

        if(c==0)

        {

            printf("%d ",arr[i]);

            k++;

        }

    }

    if(k==0)

    {

        printf("-1");

    }

    

}